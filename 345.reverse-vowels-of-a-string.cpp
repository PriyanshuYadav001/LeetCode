/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vow={'a','e','i','o','u','A','E','I','O','U'};
        int l=0,r=s.size()-1;
        while(l<=r){
            if(vow.find(s[l])!=vow.end() && vow.find(s[r])!=vow.end()) {
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else if(vow.find(s[l])==vow.end()) l++;
            else if(vow.find(s[r])==vow.end()) r--;
        }
        return s;
    }
};
// @lc code=end

