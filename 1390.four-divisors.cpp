/*
 * @lc app=leetcode id=1390 lang=cpp
 *
 * [1390] Four Divisors
 */

// @lc code=start
class Solution {
public:
    pair<int,int> divisors(int n){
        int res=0,div=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                int j=n/i;
                if(i==j){
                    div++;
                    res+=i;
                }
                else{
                    div+=2;
                    res+=i+j;
                }
            }
        }
        return {res,div};
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int n:nums){
            if(divisors(n).second==4) ans+=divisors(n).first;
        }
        return ans;
    }
};
// @lc code=end

