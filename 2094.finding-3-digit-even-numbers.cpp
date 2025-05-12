/*
 * @lc app=leetcode id=2094 lang=cpp
 *
 * [2094] Finding 3-Digit Even Numbers
 */

// @lc code=start
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(int d:digits) mp[d]++;
        for(int i=100;i<=999;i++){
            if(i%2==0){
                int unit=i%10;
                int ten=(i/10)%10;
                int hundred=i/100;

                mp[unit]--;
                mp[ten]--;
                mp[hundred]--;

                if(mp[unit]>-1 && mp[ten]>-1 && mp[hundred]>-1){
                    res.push_back(i);
                }

                mp[unit]++;
                mp[ten]++;
                mp[hundred]++;
            }
        }
        return res;
    }
};
// @lc code=end

