/*
 * @lc app=leetcode id=3340 lang=cpp
 *
 * [3340] Check Balanced String
 */

// @lc code=start
class Solution {
public:
    bool isBalanced(string num) {
        int evenSum=0;
        int oddSum=0;
        for(int i=0;i<num.size();i++){
            if(i%2==0){
                evenSum+=num[i]-'0';
            }
            else oddSum+=num[i]-'0';
        }
        return evenSum==oddSum;
    }
};
// @lc code=end

