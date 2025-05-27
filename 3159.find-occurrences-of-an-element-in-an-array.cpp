/*
 * @lc app=leetcode id=3159 lang=cpp
 *
 * [3159] Find Occurrences of an Element in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        unordered_map<int,int> mp;
        int occ=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x) mp[occ++]=i;
        }
        vector<int> res;
        for(int q:queries){
            if(mp.count(q)==0) res.push_back(-1);
            else res.push_back(mp[q]);
        }
        return res;
    }
};
// @lc code=end

