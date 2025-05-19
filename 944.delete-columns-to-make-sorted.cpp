// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem944.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=944 lang=cpp
 *
 * [944] Delete Columns to Make Sorted
 */

// @lc code=start
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        vector<string> arr;
        int n=strs[0].size();
        for(int i=0;i<n;i++){
            string word="";
            for(int j=0;j<strs.size();j++){
                word+=strs[j][i];
            }
            arr.push_back(word);
        }
        int res=0;
        for(string word:arr){
            string str=word;
            sort(str.begin(),str.end());
            if(str!=word) res++;
        }
        return res;
    }
};
// @lc code=end

