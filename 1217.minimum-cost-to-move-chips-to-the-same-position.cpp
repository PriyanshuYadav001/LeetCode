/*
 * @lc app=leetcode id=1217 lang=cpp
 *
 * [1217] Minimum Cost to Move Chips to The Same Position
 */

// @lc code=start
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int even=0,odd=0;
        for(int p:position){
            if(p%2==0) even++;
            else odd++;
        }
        return min(odd,even);
    }
};
// @lc code=end

