/*
 * @lc app=leetcode id=1489 lang=cpp
 *
 * [1489] Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree
 */

// @lc code=start
class Solution {
public:
    int mst_cost(vector<vector<pair<int,int>>> &g,int a=-1,int b=-1,int w_ab=0){
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int mst=0;
        int num_edge_mst=0;
        unordered_set<int> included;         
        if(a==-1 && b==-1){
            int min_nbr=-1,w=1e8;
            for(int i=0;i<g[0].size();i++){
                auto nbr=g[0][i];
                if(nbr.second<w){
                    w=nbr.second;
                    min_nbr=nbr.first;
                }
            }
            a=0;
            b=min_nbr;
            w_ab=w;
        }    
        included.insert(a);
        included.insert(b);
        pq.push({-1,a});
        pq.push({-1,b});
        mst+=w_ab;
        num_edge_mst+=1;  
        while(!pq.empty() && num_edge_mst<g.size()-1){      
            auto f=pq.top();                          
            pq.pop();                                           
            if(f.first > 0 && (included.find(f.second)==included.end())){
                mst+=f.first;
                num_edge_mst+=1;
                included.insert(f.second);
            }                               
            for(auto nbr:g[f.second]){
                if(included.find(nbr.first)!=included.end()) continue;
                pq.push({nbr.second,nbr.first});
            }                          
        }                           
        return mst;
    }
    vector<vector<int>> findCriticalAndPseudoCriticalEdges(int n, vector<vector<int>>& edges) {
        vector<vector<int>> ans;
        vector<vector<pair<int,int>>> g(n);
        for(int i=0;i<edges.size();i++){
            g[edges[i][0]].push_back({edges[i][1],edges[i][2]});
            g[edges[i][1]].push_back({edges[i][0],edges[i][2]});
        }
        int MST=mst_cost(g);  
        vector<int> critical;
        vector<int> p_critical;
        for(int i=0;i<edges.size();i++){
            auto e=edges[i];
            int a=e[0],b=e[1],w=e[2];
            for(int j=0;j<g[a].size();j++){
                if(g[a][j].first==b) g[a][j].second=1001;
            }
            for(int j=0;j<g[b].size();j++){
                if(g[b][j].first==a) g[b][j].second=1001;
            }                                       
            int mst_e=mst_cost(g);                          
            if(mst_e>MST){
                critical.push_back(i);
            }
            for(int j=0;j<g[a].size();j++){
                if(g[a][j].first==b) g[a][j].second=w;
            }
            for(int j=0;j<g[b].size();j++){
                if(g[b][j].first==a) g[b][j].second=w;
            }
            
            int mst_e1=mst_cost(g,a,b,w);             
            if(mst_e1==MST){
                if(mst_e<=MST)
                p_critical.push_back(i);
            }
        }
        ans.push_back(critical);
        ans.push_back(p_critical);
        return ans;
    }
};
// @lc code=end

