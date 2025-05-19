/*
 * @lc app=leetcode id=1160 lang=cpp
 *
 * [1160] Find Words That Can Be Formed by Characters
 */

// @lc code=start
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<string> arr;
        unordered_map<char,int> mp;
        for(char c:chars) mp[c]++;

        for(string word:words){
            string str="";
            for(char c:word){
                if(mp[c]>0){
                    str+=c;
                    mp[c]--;
                }
            }
            for(char c:str) mp[c]++;
            if(str==word) arr.push_back(word);
        }
        int res=0;
        for(string s:arr) res+=s.size();
        return res;
    }
};
// @lc code=end

