/*
 * @lc app=leetcode id=3342 lang=cpp
 *
 * [3342] Find Minimum Time to Reach Last Room II
 */

// @lc code=start
class Solution {
    public:
        int minTimeToReach(vector<vector<int>>& moveTime) {
            int n=moveTime.size(), m=moveTime[0].size();
            int dirs[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
            vector<vector<int>> res(n,vector<int>(m,INT_MAX));
    
            priority_queue<pair<int,pair<int,pair<int,int>>>> pq;
            pq.push({0,{0,{0,0}}});
            res[0][0]=0;
    
            while(!pq.empty()){
                int time=-pq.top().first;
                auto steps=pq.top().second.first;
                auto cell=pq.top().second.second;
                pq.pop();
    
                if(time>res[cell.first][cell.second]) continue;
    
                if(cell.first==n-1 && cell.second==m-1) return time;
                int val= (steps%2==0) ? 1:2;
                for(int i=0;i<4;i++){
                    int dx=dirs[i][0]+cell.first, dy=dirs[i][1]+cell.second;
    
                    if(dx<0 || dy<0 || dx>n-1 || dy>m-1) continue;
                    int t=max(time,moveTime[dx][dy])+val;
    
                    if(t<res[dx][dy]){
                        res[dx][dy]=t;
                        pq.push({-t,{steps+1,{dx,dy}}});
                    }
                }
            }
            return -1;
        }
    };
// @lc code=end

