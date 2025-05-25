/*
 * @lc app=leetcode id=1971 lang=cpp
 *
 * [1971] Find if Path Exists in Graph
 */

// @lc code=start
class Solution {
public:

    bool dfs(vector<vector<int>>& adj,vector<bool>& vis, int& curr, int& destination){
        if(curr==destination) return true;

        vis[curr]=true;
        for(auto i:adj[curr]){
            if(vis[i]==false){
                if(dfs(adj,vis,i,destination)) return true;
            }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(auto e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool> vis(n,false);
        return dfs(adj,vis,source,destination);
    }
};
// @lc code=end

