/*
 * @lc app=leetcode id=2698 lang=cpp
 *
 * [2698] Find the Punishment Number of an Integer
 */

// @lc code=start
class Solution {
public:
    bool check (long long num, int sum, int orig){
        if(num==0){
            if(sum==orig)return true;
            return false;
        }
        int val=num;
        int i=1;
        while(val){
            val/=10;
            int gen=num/i;
            if(check(num%i,sum+gen,orig))return true;
            i*=10;
        }
        return false;
    }
    int punishmentNumber(int n){
       int sum=0;
       for(int i=1;i<=n;i++) if(check(i*i,0,i))sum+=i*i;
       return sum;
    }
};
// @lc code=end

