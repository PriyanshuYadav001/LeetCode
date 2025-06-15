/*
 * @lc app=leetcode id=1319 lang=cpp
 *
 * [1319] Number of Operations to Make Network Connected
 */

// @lc code=start
class Solution {
public:
    vector<int> parent;
    vector<int> rank;

    int find(int x){
        if(parent[x]==x) return x;
        return parent[x]=find(parent[x]);
    }

    void Union(int x, int y){
        int x_parent=find(x);
        int y_parent=find(y);

        if(x_parent==y_parent) return;

        if(rank[x_parent]>rank[y_parent]) parent[y_parent]=x_parent;
        else if(rank[x_parent]<rank[y_parent]) parent[x_parent]=y_parent;
        else parent[y_parent]=x_parent;
        rank[x_parent]++;
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1) return -1;

        parent.resize(n);
        rank.resize(n,0);

        for(int i=0;i<n;i++) parent[i]=i;
        int comp=n;
        for(auto& vec:connections){
            if(find(vec[0])!=find(vec[1])){
                Union(vec[0],vec[1]);
                comp--;
            }
        }
        return comp-1;
    }
};
// @lc code=end

