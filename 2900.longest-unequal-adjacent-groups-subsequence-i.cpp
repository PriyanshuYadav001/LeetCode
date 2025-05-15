/*
 * @lc app=leetcode id=2900 lang=cpp
 *
 * [2900] Longest Unequal Adjacent Groups Subsequence I
 */

// @lc code=start
class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        bool ptr=0;
        vector<string> res;
        for(int i=0;i<words.size();i++){
            vector<string> ans;
            ans.push_back(words[i]);
            ptr=groups[i];
            for(int j=i+1;j<words.size();j++){
                if(ptr!=groups[j]){
                    ans.push_back(words[j]);
                    ptr=!ptr;
                }
            }
            if(ans.size()>res.size()) res=ans;
        }
        return res;
    }
};
// @lc code=end

