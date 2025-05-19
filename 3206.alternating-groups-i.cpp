/*
 * @lc app=leetcode id=3206 lang=cpp
 *
 * [3206] Alternating Groups I
 */

// @lc code=start
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n=colors.size();
        int res=0;
        for(int i=1;i<n-1;i++){
            if(colors[i]!=colors[i+1] && colors[i]!=colors[i-1]) res++;
        }
        if(colors[0]!=colors[n-1] && colors[n-1]!=colors[n-2]) res++;
        if(colors[0]!=colors[1] && colors[0]!=colors[n-1]) res++;
        return res;
    }
};
// @lc code=end

