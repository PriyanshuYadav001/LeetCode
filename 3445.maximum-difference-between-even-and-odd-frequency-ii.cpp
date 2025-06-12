/*
 * @lc app=leetcode id=3445 lang=cpp
 *
 * [3445] Maximum Difference Between Even and Odd Frequency II
 */

// @lc code=start
class Solution {
public:
    int maxDifference(string s, int k) {
        int res = INT_MIN;
        for ( char a = '0' ; a <= '4' ; a++ ) {
            for(  char b = '0' ; b <= '4' ; b++ ) {
                if ( a == b ) continue;

                vector<int> pa(1, 0), pb(1, 0);
                int j = 0;
                auto pairHash=[](const pair<int,int>& p) -> size_t {
                    return hash<int>()(p.first)^hash<int>()(p.second);
                };

                unordered_map<pair<int,int>,int,decltype(pairHash)> seen(
                    10,pairHash);

                for (int i = 0 ; i < s.size() ; i++ ) {
                    pa.push_back(pa.back() + ( s[i] == a ? 1 : 0 ));
                    pb.push_back(pb.back() + ( s[i] == b ? 1 : 0 ));

                    while ( j <= i - k + 1 && pa[j] < pa.back() &&
                           pb[j]< pb.back()){
                        pair<int,int> key = {pa[j] % 2, pb[j] % 2};
                        int diff = pa[j] - pb[j];
                        if(!seen.count(key) || diff < seen[key])
                            seen[key]=diff;
                        j++;
                    }

                    pair<int,int> curr_key={(1-pa.back()%2),pb.back()%2};
                    if (seen.count(curr_key))
                        res = max(res,(pa.back()-pb.back())-seen[curr_key]);
                }
            }
        }
        return res;
    }
};
// @lc code=end

