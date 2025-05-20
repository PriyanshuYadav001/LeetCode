/*
 * @lc app=leetcode id=52 lang=cpp
 *
 * [52] N-Queens II
 */

// @lc code=start
class Solution {
public:

    bool isSafe(int row,int col, vector<string>& board){
        int r=row,c=col;
        while(c>=0){
            if(board[r][c]=='Q') return false;
            c--;
        }
        r=row;
        c=col;

        while(r>=0 && c>=0){
            if(board[r][c]=='Q') return false;
            r--;
            c--;
        }
        r=row;
        c=col;

        while(r<board.size() && c>=0){
            if(board[r][c]=='Q') return false;
            r++;
            c--;    
        }
        return true;
    }

    int solve(int col, vector<string>& board){
        if(col==board.size()) return 1;
        int count=0;
        for(int row=0;row<board.size();row++){
            if(isSafe(row,col,board)){
                board[row][col]='Q';
                count+=solve(col+1,board);
                board[row][col]='.';
            }
        }
        return count;
    }
    int totalNQueens(int n) {
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++) board[i]=s;
        return solve(0,board);
    }
};
// @lc code=end

