/*
 * @lc app=leetcode id=1296 lang=cpp
 *
 * [1296] Divide Array in Sets of K Consecutive Numbers
 */

// @lc code=start
class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int n:nums) mp[n]++;
        while(!mp.empty()){
            int num=mp.begin()->first;
            for(int i=num;i<num+k;i++){
                if(mp.find(i)==mp.end()) return false;
                mp[i]--;
                if(mp[i]==0) mp.erase(i);
            }
        }
        return true;
    }
};
// @lc code=end

