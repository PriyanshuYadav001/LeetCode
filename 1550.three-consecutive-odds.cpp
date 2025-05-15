/*
 * @lc app=leetcode id=1550 lang=cpp
 *
 * [1550] Three Consecutive Odds
 */

// @lc code=start
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
<<<<<<< HEAD
        if(arr.size()>=3){ 
            for(int i=0;i<arr.size()-2;i++){
                if(arr[i]%2==1 && arr[i+1]%2==1 && arr[i+2]%2==1) return true;
            }
=======
        if(arr.size()<3) return false;
        for(int i=0;i<arr.size()-2;i++){
            if(arr[i]%2==1 && arr[i+1]%2==1 && arr[i+2]%2==1) return true;
>>>>>>> fe94aa0 (3335. solution)
        }
        return false;
    }
};
// @lc code=end

