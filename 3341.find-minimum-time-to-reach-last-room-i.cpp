/*
 * @lc app=leetcode id=3341 lang=cpp
 *
 * [3341] Find Minimum Time to Reach Last Room I
 */

// @lc code=start
class Solution {
    public:
        int minTimeToReach(vector<vector<int>>& moveTime) {
            int n=moveTime.size(), m=moveTime[0].size();
            int dirs[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
            vector<vector<int>> res(n,vector<int>(m,INT_MAX));
    
            priority_queue<pair<int,pair<int,int>>> pq;
            pq.push({0,{0,0}});
            res[0][0]=0;
    
            while(!pq.empty()){
                int time=-pq.top().first;
                auto cell=pq.top().second;
                pq.pop();
    
                if(time>res[cell.first][cell.second]) continue;
    
                if(cell.first==n-1 && cell.second==m-1) return time;
    
                for(int i=0;i<4;i++){
                    int dx=dirs[i][0]+cell.first, dy=dirs[i][1]+cell.second;
    
                    if(dx<0 || dy<0 || dx>n-1 || dy>m-1) continue;
    
                    int t=max(time,moveTime[dx][dy])+1;
    
                    if(t<res[dx][dy]){
                        res[dx][dy]=t;
                        pq.push({-t,{dx,dy}});
                    }
                }
            }
            return -1;
        }
    };
// @lc code=end

