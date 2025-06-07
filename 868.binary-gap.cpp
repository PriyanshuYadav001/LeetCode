/*
 * @lc app=leetcode id=868 lang=cpp
 *
 * [868] Binary Gap
 */

// @lc code=start
class Solution {
public:
    int binaryGap(int n) {
        string str=bitset<32>(n).to_string();
        int prev=-1;
        int max_gap=0;
        for(int i=0;i<32;i++){
            if(str[i]=='1'){
                if(prev!=-1){
                    max_gap=max(max_gap,i-prev);
                }
                prev=i;
            }
        }
        return max_gap;
    }
};
// @lc code=end

