/*
 * @lc app=leetcode id=2303 lang=cpp
 *
 * [2303] Calculate Amount Paid in Taxes
 */

// @lc code=start
class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        int tax=0;
        for(int i=0;i<brackets.size();i++){
            if(i==0){
                if(brackets[0][0]<=income){
                    tax+=brackets[0][0]*brackets[0][1];
                    income-=brackets[0][0];
                }
                else{
                    tax+=income*brackets[0][1];
                    return tax/100.0;
                }
            }
            else{
                int money=brackets[i][0]-brackets[i-1][0];
                if(money>income) money=income;
                tax+=money*brackets[i][1];
                income-=money;
            }
        }
        return tax/100.0;
    }
};
// @lc code=end

