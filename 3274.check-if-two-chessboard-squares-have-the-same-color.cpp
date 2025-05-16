/*
 * @lc app=leetcode id=3274 lang=cpp
 *
 * [3274] Check if Two Chessboard Squares Have the Same Color
 */

// @lc code=start
class Solution {
public:
    bool checkTwoChessboards(string c1, string c2) {
        if((c1[0]-'a'+1+(c1[1]-'0'))%2==0 && (c2[0]-'a'+1+(c2[1]-'0'))%2==0) return true;
        else if((c1[0]-'a'+1+(c1[1]-'0'))%2==1 && (c2[0]-'a'+1+(c2[1]-'0'))%2==1) return true;
        return false;
    }
};
// @lc code=end

