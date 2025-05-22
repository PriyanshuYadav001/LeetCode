/*
 * @lc app=leetcode id=624 lang=cpp
 *
 * [624] Maximum Distance in Arrays
 */

// @lc code=start
class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int smallest=arrays[0][0];
        int largest=arrays[0].back();
        int res=0;

        for(int i=1;i<arrays.size();i++){
            res=max(res,abs(arrays[i].back()-smallest));
            res=max(res,abs(largest-arrays[i].front()));
            smallest=min(smallest,arrays[i].front());
            largest=max(largest,arrays[i].back());
        }
        return res;
    }
};
// @lc code=end

