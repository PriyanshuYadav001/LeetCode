/*
 * @lc app=leetcode id=2279 lang=cpp
 *
 * [2279] Maximum Bags With Full Capacity of Rocks
 */

// @lc code=start
class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=rocks.size();
        vector<int> rem_cap(n);
        for(int i=0;i<n;i++) rem_cap[i]=capacity[i]-rocks[i];

        sort(rem_cap.begin(),rem_cap.end());

        int res=0;
        for(int i=0;i<n;i++){
            if(additionalRocks>=rem_cap[i]){
                res++;
                additionalRocks-=rem_cap[i];
            }
        }
        return res;
    }
};
// @lc code=end

