/*
 * @lc app=leetcode id=2611 lang=cpp
 *
 * [2611] Mice and Cheese
 */

// @lc code=start
class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int res=accumulate(reward2.begin(),reward2.end(),0);
        priority_queue<int> pq;
        for(int i=0;i<reward1.size();i++) pq.push(reward1[i]-reward2[i]);
        while(k--){
            res+=pq.top();
            pq.pop();
        }
        return res;
    }
};
// @lc code=end

