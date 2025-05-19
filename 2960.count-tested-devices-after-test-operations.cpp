/*
 * @lc app=leetcode id=2960 lang=cpp
 *
 * [2960] Count Tested Devices After Test Operations
 */

// @lc code=start
class Solution {
public:
    int countTestedDevices(vector<int>& bp) {
        int res=0;
        for(int i=0;i<bp.size();i++){
            if(bp[i]>0){
                res++;
                for(int j=i+1;j<bp.size();j++){
                    bp[j]=max(0,bp[j]-1);
                }
            }
        }
        return res;
    }
};
// @lc code=end

