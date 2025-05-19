/*
 * @lc app=leetcode id=3079 lang=cpp
 *
 * [3079] Find the Sum of Encrypted Integers
 */

// @lc code=start
class Solution {
public:
    int encrypt(int num){
        int res=0;
        string str=to_string(num);
        int len=str.size();
        for(char c:str) res=max(res,c-'0');
        string s="";
        while(len--) s+=res+'0';
        return stoi(s);
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int res=0;
        for(int n:nums) res+=encrypt(n);
        return res;
    }
};
// @lc code=end

