/*
 * @lc app=leetcode id=1447 lang=cpp
 *
 * [1447] Simplified Fractions
 */

// @lc code=start
class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        unordered_set<string> st;
        vector<string> res;
        for(int den=2;den<=n;den++){
            for(int num=1;num<den;num++){
                string nu=to_string(num/gcd(num,den));
                string de=to_string(den/gcd(num,den));
                st.insert(nu+'/'+de);
            }
        }
        for(string s:st) res.push_back(s);
        return res;
    }
};
// @lc code=end

