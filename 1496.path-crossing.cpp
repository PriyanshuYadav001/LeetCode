/*
 * @lc app=leetcode id=1496 lang=cpp
 *
 * [1496] Path Crossing
 */

// @lc code=start
class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> mySet;
        mySet.insert({0,0});
        pair<int,int> pt={0,0};
        for(char c:path){
            if(c=='N') pt.second++;
            else if(c=='S') pt.second--;
            else if(c=='E') pt.first++;
            else pt.first--;

            if(mySet.find(pt)!=mySet.end()) return true;
            mySet.insert(pt);
        }
        return false;
    }
};
// @lc code=end

