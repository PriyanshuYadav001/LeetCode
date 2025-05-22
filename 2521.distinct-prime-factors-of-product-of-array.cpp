/*
 * @lc app=leetcode id=2521 lang=cpp
 *
 * [2521] Distinct Prime Factors of Product of Array
 */

// @lc code=start
class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> st;

        for(int n:nums){
            for(int i=2;i<=sqrt(n);i++){
                while(n%i==0){
                    st.insert(i);
                    n/=i;
                }
            }
            if(n>1) st.insert(n);
        }
        return st.size();
    }
};
// @lc code=end

