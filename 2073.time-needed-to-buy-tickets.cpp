/*
 * @lc app=leetcode id=2073 lang=cpp
 *
 * [2073] Time Needed to Buy Tickets
 */

// @lc code=start
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int res=0;
        int i=0;
        while(tickets[k]!=0){
            if(tickets[i]>0){
                res++;
                tickets[i]--;
            }
            i=(i+1)%tickets.size();
        }
        return res;
    }
};
// @lc code=end

