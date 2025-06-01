/*
 * @lc app=leetcode id=1275 lang=cpp
 *
 * [1275] Find Winner on a Tic Tac Toe Game
 */

// @lc code=start
class Solution {
public:
    char diagonal(vector<vector<char>>& grid){
        if(grid[0][0]=='x' && grid[1][1]=='x' && grid[2][2]=='x') return 'x';
        else if(grid[0][0]=='y' && grid[1][1]=='y' && grid[2][2]=='y') return 'y';
        else if(grid[0][2]=='x' && grid[1][1]=='x' && grid[2][0]=='x') return 'x';
        else if(grid[0][2]=='y' && grid[1][1]=='y' && grid[2][0]=='y') return 'y';
        return 'a';
    }

    char row(vector<vector<char>>& grid){
        for(int i=0;i<3;i++){
            if(grid[i][0]==grid[i][1] && grid[i][1]==grid[i][2] && grid[i][0]!='\0') 
                return grid[i][0];
        }
        return 'a';
    }

    char col(vector<vector<char>>& grid){
        for(int i=0;i<3;i++){
            if(grid[0][i]==grid[1][i] && grid[1][i]==grid[2][i] && grid[0][i]!='\0') 
                return grid[0][i];
        }
        return 'a';
    }
    
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> grid(3,vector<char>(3,'\0'));
        
        for(int i=0;i<moves.size();i++){
            int r=moves[i][0], c=moves[i][1];
            grid[r][c]=(i%2==0) ? 'x':'y';
        }

        char winner=diagonal(grid);
        if(winner=='a') winner=row(grid);
        if(winner=='a') winner=col(grid);

        if(winner=='x') return "A";
        else if(winner=='y') return "B";
        else if(moves.size()==9) return "Draw";
        return "Pending";
    }
};

// @lc code=end

