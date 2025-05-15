/*
 * @lc app=leetcode id=1089 lang=cpp
 *
 * [1089] Duplicate Zeros
 */

// @lc code=start
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int sz=arr.size();
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){arr.insert(arr.begin()+i+1,0);
            i++;
            }
        }
        while(arr.size()>sz){
            arr.pop_back();
        }
    }
};
// @lc code=end

