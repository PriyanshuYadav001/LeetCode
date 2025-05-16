/*
 * @lc app=leetcode id=999 lang=cpp
 *
 * [999] Available Captures for Rook
 */

// @lc code=start
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int res=0;
        int row=0, col=0;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j]=='R'){
                    row=i;
                    col=j;
                }
            }
        }
        for(int i=row-1;i>=0;i--){
            if(board[i][col]=='p') res++;
            if(board[i][col]!='.') break;
        }
        for(int i=row+1;i<8;i++){
            if(board[i][col]=='p') res++;
            if(board[i][col]!='.') break;
        }
        for(int j=col-1;j>=0;j--){
            if(board[row][j]=='p') res++;
            if(board[row][j]!='.') break;
        }
        for(int j=col+1;j<8;j++){
            if(board[row][j]=='p') res++;
            if(board[row][j]!='.') break;
        }
        return res;

    }
};
// @lc code=end

