/*
 * @lc app=leetcode id=1935 lang=cpp
 *
 * [1935] Maximum Number of Words You Can Type
 */

// @lc code=start
class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        stringstream ss(text);
        string word;
        vector<string> arr;
        while(ss>>word){
            arr.push_back(word);
        }
        int res=arr.size();
        unordered_set<char> st(brokenLetters.begin(),brokenLetters.end());
        for(auto word:arr){
            for(char c:word){
                if(st.find(c)!=st.end()){
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};
// @lc code=end

