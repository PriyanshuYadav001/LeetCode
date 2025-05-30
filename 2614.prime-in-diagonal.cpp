/*
 * @lc app=leetcode id=2614 lang=cpp
 *
 * [2614] Prime In Diagonal
 */

// @lc code=start
class Solution {
public:

    bool isPrime(int n){
        if(n==1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    
    int diagonalPrime(vector<vector<int>>& nums) {
        int res=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(isPrime(nums[i][i])) res=max(res,nums[i][i]);
            if(isPrime(nums[i][n-1-i])) res=max(res,nums[i][n-i-1]);
        }
        return res;
    }
};
// @lc code=end

