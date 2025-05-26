/*
 * @lc app=leetcode id=1857 lang=cpp
 *
 * [1857] Largest Color Value in a Directed Graph
 */

// @lc code=start
class Solution {
public:
void dfs(int curr,string &colors,vector<int> adj[],vector<bool> &vis,vector<bool> &currPath,vector<vector<int>> &count,int &res){
        if(currPath[curr] || res==-1){
            res=-1;
            return;
        }
        if(vis[curr]) return;
        vis[curr]=true;
        currPath[curr]=true;
        for(int next:adj[curr]){
            dfs(next,colors,adj,vis,currPath,count,res);
            if(res==-1) return;
            for(int i=0;i<26;i++){
                count[curr][i]=max(count[curr][i],count[next][i]);
            }
        }
        count[curr][colors[curr]-'a']++;
        res=max(res,count[curr][colors[curr]-'a']);
        currPath[curr]=false;
    }
    
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n=colors.length();
        vector<int> adj[n];
        for(vector<int> edge:edges){
            adj[edge[0]].push_back(edge[1]);
        }
        int res=INT_MIN;
        vector<bool> vis(n),currPath(n);
        vector<vector<int>> count(n,vector<int>(26));
        for(int i=0;i<n;i++){
            dfs(i,colors,adj,vis,currPath,count,res);
        }
        return res;
    }
};
// @lc code=end

