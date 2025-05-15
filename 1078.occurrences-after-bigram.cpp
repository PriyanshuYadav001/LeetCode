/*
 * @lc app=leetcode id=1078 lang=cpp
 *
 * [1078] Occurrences After Bigram
 */

// @lc code=start
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> arr;
        stringstream ss(text);
        string s;
        while(ss>>s){
            arr.push_back(s);
        }
        vector<string> res;
        for(int i=0;i<arr.size()-2;i++){
            if(arr[i]==first && arr[i+1]==second) res.push_back(arr[i+2]);
        }
        return res;
    }
};
// @lc code=end

