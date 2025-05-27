/*
 * @lc app=leetcode id=1395 lang=cpp
 *
 * [1395] Count Number of Teams
 */

// @lc code=start
class Solution {
public:
    int numTeams(vector<int>& rating) {
        int teams=0;
        int n=rating.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(rating[i]>rating[j] && rating[j]>rating[k]) teams++;
                    else if(rating[i]<rating[j] && rating[j]<rating[k]) teams++;
                }
            }
        }
        return teams;
    }
};
// @lc code=end

