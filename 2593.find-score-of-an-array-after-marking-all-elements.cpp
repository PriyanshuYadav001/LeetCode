/*
 * @lc app=leetcode id=2593 lang=cpp
 *
 * [2593] Find Score of an Array After Marking All Elements
 */

// @lc code=start
class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long res=0;
        vector<pair<int,int>> arr;
        vector<bool> mark(nums.size(),false);
        for(int i=0;i<nums.size();i++) arr.push_back({nums[i],i});
        sort(arr.begin(),arr.end());
        for(int i=0;i<nums.size();i++){
            if(mark[arr[i].second]==false){
                if(arr[i].second==0){
                    mark[arr[i].second+1]=true;
                }
                else if(arr[i].second==nums.size()-1){
                    mark[arr[i].second-1]=true;
                }
                else{
                    mark[arr[i].second-1]=true;
                    mark[arr[i].second+1]=true;
                }
                res+=arr[i].first;
                mark[arr[i].second]=true;
            }
        }
        return res;
    }
};
// @lc code=end

