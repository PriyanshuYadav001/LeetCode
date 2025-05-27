/*
 * @lc app=leetcode id=786 lang=cpp
 *
 * [786] K-th Smallest Prime Fraction
 */

// @lc code=start
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<double,pair<int,int>>> nums;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                nums.push_back({(double)arr[i]/arr[j],{arr[i],arr[j]}});
            }
        }
        sort(nums.begin(),nums.end());
        
        return {nums[k-1].second.first,nums[k-1].second.second};
    }
};
// @lc code=end

