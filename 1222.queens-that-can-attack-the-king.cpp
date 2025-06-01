/*
 * @lc app=leetcode id=1222 lang=cpp
 *
 * [1222] Queens That Can Attack the King
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> res;
        set<vector<int>> st;
        for(auto q:queens) st.insert({q[0],q[1]});
        vector<pair<int,int>> dirs={{-1,0},{1,0},{0,1},{0,-1},{1,1},{-1,1},{1,-1},{-1,-1}};
        for(auto d:dirs){
            int x=king[0], y=king[1];
            while(x>=0 && x<8 && y>=0 && y<8){
                x+=d.first;
                y+=d.second;
                if(st.find({x,y})!=st.end()){
                    res.push_back({x,y});
                    break;
                }
            }
        }
        return res;
    }
};
// @lc code=end

