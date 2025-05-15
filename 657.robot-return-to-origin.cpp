/*
 * @lc app=leetcode id=657 lang=cpp
 *
 * [657] Robot Return to Origin
 */

// @lc code=start
class Solution {
public:
    bool judgeCircle(string moves) {
        int horizontal=0;
        int vertical=0;
        for(char c:moves){
            if(c=='U') vertical++;
            else if(c=='D') vertical--;
            else if(c=='L') horizontal--;
            else horizontal++;
        }
        if(vertical==0 && horizontal==0) return true;
        return false;
    }
};
// @lc code=end

