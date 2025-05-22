/*
 * @lc app=leetcode id=2335 lang=cpp
 *
 * [2335] Minimum Amount of Time to Fill Cups
 */

// @lc code=start
class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq;
        for(int a:amount){
            if(a!=0) pq.push(a);
        }

        int res=0;
        while(pq.size()>1){
            int x=pq.top(); pq.pop();
            int y=pq.top(); pq.pop();

            res++;
            x--, y--;

            if(x>0) pq.push(x);
            if(y>0) pq.push(y);
        }
        if(!pq.empty()) res+=pq.top();
        return res;
    }
};
// @lc code=end

