/*
 * @lc app=leetcode id=1343 lang=cpp
 *
 * [1343] Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
 */

// @lc code=start
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int res=0;
        int sum=accumulate(arr.begin(),arr.begin()+k,0);
        if((double)(sum/k)>=threshold) res++;
        for(int i=1;i<arr.size()-k+1;i++){
            sum-=arr[i-1];
            sum+=arr[i+k-1];
            if((double)(sum/k)>=threshold) res++;
        }
        return res;
    }
};
// @lc code=end

