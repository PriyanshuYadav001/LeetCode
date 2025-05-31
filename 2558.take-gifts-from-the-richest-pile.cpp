/*
 * @lc app=leetcode id=2558 lang=cpp
 *
 * [2558] Take Gifts From the Richest Pile
 */

// @lc code=start
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int t) {
        priority_queue<long long> pq;
        for(int n:gifts) pq.push(n);
        while(t--){
            int num=pq.top(); pq.pop();
            pq.push(sqrt(num));
        }
        long long res=0;
        while(!pq.empty()){
            res+=pq.top();
            pq.pop();
        }
        return res;
    }
};
// @lc code=end

