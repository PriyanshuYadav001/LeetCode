/*
 * @lc app=leetcode id=838 lang=cpp
 *
 * [838] Push Dominoes
 */

// @lc code=start
class Solution {
public:
string pushDominoes(string d) {
    d='L'+d+'R';
    string res="";
    for (int i=0,j=1;j<d.length(); ++j) {
        if (d[j]=='.') continue;
        int middle=j-i-1;
        if(i>0) res+=d[i];
        if(d[i]==d[j]) res+=string(middle,d[i]);
        else if(d[i]=='L' && d[j]=='R') res+=string(middle,'.');
        else res+=string(middle/2,'R')+string(middle%2,'.')+string(middle/2,'L');
        i=j;
    }
    return res;
}
};
// @lc code=end

