/*
 * @lc app=leetcode id=3216 lang=cpp
 *
 * [3216] Lexicographically Smallest String After a Swap
 */

// @lc code=start
class Solution {
public:
    string getSmallestString(string s) {
        for(int i=0;i<s.size()-1;i++){
            if(s[i]>s[i+1] && (s[i]-'0')%2==(s[i+1]-'0')%2){
                swap(s[i],s[i+1]);
                    break;
            }
        }
        return s;
    }
};
// @lc code=end

