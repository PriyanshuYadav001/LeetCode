/*
 * @lc app=leetcode id=3477 lang=cpp
 *
 * [3477] Fruits Into Baskets II
 */

// @lc code=start
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int res=0;
        vector<int> mark(baskets.size(),false);
        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
                if(fruits[i]<=baskets[j] && mark[j]==false){
                    res++;
                    mark[j]=true;
                    break;
                }
            }
        }
        return fruits.size()-res;
    }
};
// @lc code=end

