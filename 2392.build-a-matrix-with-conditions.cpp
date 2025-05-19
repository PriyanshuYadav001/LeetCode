/*
 * @lc app=leetcode id=2392 lang=cpp
 *
 * [2392] Build a Matrix With Conditions
 */

// @lc code=start
class Solution {
public:

    void dfs(int curr, unordered_map<int,vector<int>>& adj, vector<bool>& vis,vector<bool>& recStk, stack<int>& stk, bool& hasCycle){
        vis[curr]=true;
        recStk[curr]=true;

        for(auto neigh:adj[curr]){
            if(!vis[neigh]){
                dfs(neigh,adj,vis,recStk,stk,hasCycle);
                if(hasCycle) return;
            }
            else if(recStk[neigh]){
                hasCycle=true;
                return;
            }
        }

        recStk[curr]=false;
        stk.push(curr);
    }

    vector<int> topSort(vector<vector<int>>& edges, int n){
        unordered_map<int,vector<int>> adj;
        stack<int> stk;
        vector<int> order;

        vector<bool> vis(n+1,false);
        vector<bool> recStk(n+1,false);

        bool hasCycle=false;

        for(auto e:edges){
            adj[e[0]].push_back(e[1]);
        }

        for(int i=1;i<=n;i++){
            if(vis[i]==false){
                dfs(i,adj,vis,recStk,stk,hasCycle);
                if(hasCycle) return {};
            }
        }

        while(!stk.empty()){
            order.push_back(stk.top());
            stk.pop();
        }
        return order;
    }

    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<int> rowOrder = topSort(rowConditions,k);
        vector<int> colOrder = topSort(colConditions,k);

        if(rowOrder.empty() || colOrder.empty()) return {};

        vector<vector<int>> grid(k,vector<int>(k,0));

        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++){
                if(rowOrder[i]==colOrder[j]){
                    grid[i][j]=rowOrder[i];
                }
            }
        }
        return grid;
    }
};
// @lc code=end

