/*
 * @lc app=leetcode id=3362 lang=cpp
 *
 * [3362] Zero Array Transformation III
 */

// @lc code=start
class Solution {
public:
    static int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size(), qz=queries.size();
        vector<vector<int>> arr(n);
        for(int i=0;i<qz;i++) arr[queries[i][0]].push_back(queries[i][1]);
        priority_queue<int> pq;
        vector<int> brr(n+1,0);
        int dec=0;
        for(int i=0,j=0;i<n;i++){
            int x=nums[i];
            dec+=brr[i];
            for(int j:arr[i]) pq.push(j);
            int k;
            for(;x>dec && pq.size()>0 && (k=pq.top())>=i; dec++){
                brr[k+1]--;
                pq.pop();
            }
            if(x>dec) return -1;
        }
        return pq.size();
    }
};
// @lc code=end

