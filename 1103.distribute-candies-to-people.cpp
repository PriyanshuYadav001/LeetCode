/*
 * @lc app=leetcode id=1103 lang=cpp
 *
 * [1103] Distribute Candies to People
 */

// @lc code=start
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people,0);
        int val=1,idx=0;
        while(candies){
            if(candies>=val){
                res[idx]+=val;
            }
            else{
                res[idx]+=candies;
                break;
            }
            idx=(idx+1)%num_people;
            candies-=val;
            val++;
        }
        return res;
    }
};
// @lc code=end

