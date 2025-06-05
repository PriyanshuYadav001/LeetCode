/*
 * @lc app=leetcode id=3304 lang=cpp
 *
 * [3304] Find the K-th Character in String Game I
 */

// @lc code=start
class Solution {
public:
    char kthCharacter(int k) {
        string str="a";
        while(str.size()<k){
            int sz=str.size();
            int i=0;
            while(i<sz){
                str+=char(str[i]+1);
                i++;
            }
        }
        return str[k-1];
    }
};
// @lc code=end

