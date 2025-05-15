/*
 * @lc app=leetcode id=2739 lang=cpp
 *
 * [2739] Total Distance Traveled
 */

// @lc code=start
class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int res=mainTank;
        while(additionalTank){
            if(mainTank>=5){
                mainTank-=4;
                res++;
            }
            additionalTank--;
        }
        return res*10;
    }
};
// @lc code=end

