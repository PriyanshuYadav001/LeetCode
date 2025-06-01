/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]<2){
                mp[nums[i]]++;
            }
            else{
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        int res=0;
        for(auto [val,freq]:mp) res+=freq;
        return res;
    }
};
// @lc code=end

