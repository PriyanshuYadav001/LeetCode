/*
 * @lc app=leetcode id=1054 lang=cpp
 *
 * [1054] Distant Barcodes
 */

// @lc code=start
class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& bar) {
        if(bar.size()==1) return bar;

        unordered_map<int,int> mp;
        for(int n:bar) mp[n]++;

        priority_queue<pair<int,int>> pq;
        for(auto [val,freq]:mp){
            pq.push({freq,val});
        }
        vector<int> res(bar.size(),0);
        int i=0;
        while(!pq.empty()){
            auto p=pq.top(); pq.pop();
            while(p.first--){
                if(i>=res.size()) i=1;
                res[i]=p.second;
                i+=2;
            }
            
        }
        return res;
    }
};
// @lc code=end

