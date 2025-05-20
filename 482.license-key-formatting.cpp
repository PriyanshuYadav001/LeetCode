/*
 * @lc app=leetcode id=482 lang=cpp
 *
 * [482] License Key Formatting
 */

// @lc code=start
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string str="";
        for(char c:s){
            if(isalnum(c)) str+=toupper(c);
        }
        string res="";
        int ptr=str.size();
        int count=0;
        while(ptr--){
            res+=str[ptr];
            count++;
            if(count==k && ptr!=0){
                res+='-';
                count=0;
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
// @lc code=end

