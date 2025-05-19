/*
 * @lc app=leetcode id=3200 lang=cpp
 *
 * [3200] Maximum Height of a Triangle
 */

// @lc code=start
class Solution {
public:
    int solve(int top,int second){
        int height=0;
        int i=1;
        while(true){
            if(i%2==1){
                if(top>=i) top-=i;
                else break;
            }
            else{
                if(second>=i) second-=i;
                else break;
            }
            height++;
            i++;
        }
        return height;
    }
    int maxHeightOfTriangle(int red, int blue) {
        return max(solve(blue,red),solve(red,blue));
    }
};
// @lc code=end

