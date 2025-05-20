/*
 * @lc app=leetcode id=2079 lang=cpp
 *
 * [2079] Watering Plants
 */

// @lc code=start
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int res=0,cap=capacity,idx=0,j=-1;
        while(idx<plants.size()){
            if(plants[idx]<=cap){
                res+=(idx-j);
                j=idx;
                cap-=plants[idx];
                idx++;
            }
            else{
                res+=idx;
                j=-1;
                cap=capacity;
            }
        }
        return res;
    }
};
// @lc code=end

