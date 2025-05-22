/*
 * @lc app=leetcode id=455 lang=cpp
 *
 * [455] Assign Cookies
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        priority_queue<int> pq_g,pq_s;
        for(int n:g) pq_g.push(n);
        for(int n:s) pq_s.push(n);

        int res=0;
        while(!pq_s.empty() && !pq_g.empty()){
            if(pq_s.top()>=pq_g.top()){
                res++;
                pq_s.pop();
                pq_g.pop();
            }
            else if(pq_s.top()<pq_g.top()) pq_g.pop();
        }
        return res;
    }
};
// @lc code=end

