/*
 * @lc app=leetcode id=1758 lang=cpp
 *
 * [1758] Minimum Changes To Make Alternating Binary String
 */

// @lc code=start
class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        int res=0;
        string str="";
        for(int i=0;i<n;i++){
            if(i%2==0 && s[i]=='1') res++;
            else if(i%2==1 && s[i]=='0') res++;
            else str+='0';
        }
        return min(res,n-res);
    }
};
// @lc code=end

