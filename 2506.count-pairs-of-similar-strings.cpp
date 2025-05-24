/*
 * @lc app=leetcode id=2506 lang=cpp
 *
 * [2506] Count Pairs Of Similar Strings
 */

// @lc code=start
class Solution {
public:
    int similarPairs(vector<string>& words) {
        vector<set<char>> arr;
        for(auto word:words){
            set<char> st(word.begin(),word.end());
            arr.push_back(st);
        }
        int res=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]) res++;
            }
        }
        return res;
    }
};
// @lc code=end

