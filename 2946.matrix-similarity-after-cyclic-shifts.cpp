/*
 * @lc app=leetcode id=2946 lang=cpp
 *
 * [2946] Matrix Similarity After Cyclic Shifts
 */

// @lc code=start
class Solution {
public:
    vector<int> left_shift(vector<int>& arr,int t){
        int n=arr.size();
        for(int i=0;i<n;i++) arr.push_back(arr[i]);
        return vector<int>(arr.begin()+t,arr.begin()+n+t);
        
    }

    vector<int> right_shift(vector<int>& arr,int t){
        int n=arr.size();
        for(int i=0;i<n;i++) arr.push_back(arr[i]);
        return vector<int>(arr.end()-n-t,arr.end()-t);
        
    }
    
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> grid=mat;
        int m=grid.size();
        int n=grid[0].size();
        k%=n;
        for(int i=0;i<m;i++){
            if(i%2==0) grid[i]=left_shift(grid[i],k);
            else grid[i]=right_shift(grid[i],k);
        }
        return grid==mat;
    }
};
// @lc code=end

