/*
 * @lc app=leetcode id=2410 lang=cpp
 *
 * [2410] Maximum Matching of Players With Trainers
 */

// @lc code=start
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int ptr_t=0, ptr_p=0;
        int res=0;
        while(ptr_t<trainers.size() && ptr_p<players.size()){
            if(players[ptr_p]<=trainers[ptr_t]){
                res++;
                ptr_p++;
            }
            ptr_t++;
        }
        return res;
    }
};
// @lc code=end

