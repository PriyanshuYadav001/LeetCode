// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem472.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=472 lang=cpp
 *
 * [472] Concatenated Words
 */

// @lc code=start
class Solution {
public:
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words){
        unordered_set<string> mySet;
        for(string word:words) mySet.insert(word);
        vector<string> res;
    
        for(string word:words){
            int n=word.size();
            vector<int> dp(n+1,0);
            dp[0]=1;
            for(int i=0;i<n;i++){
                if(dp[i]==0) continue;
                for(int j=i+1;j<=n;j++){
                    if(j-i<n && mySet.count(word.substr(i,j-i))) dp[j]=1;
                }
                if(dp[n]==1){
                    res.push_back(word);
                    break;
                }
            }
        }
        return res;
    }
};
// @lc code=end

