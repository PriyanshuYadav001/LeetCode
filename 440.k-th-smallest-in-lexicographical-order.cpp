/*
 * @lc app=leetcode id=440 lang=cpp
 *
 * [440] K-th Smallest in Lexicographical Order
 *
 * https://leetcode.com/problems/k-th-smallest-in-lexicographical-order/description/
 *
 * algorithms
 * Hard (41.98%)
 * Likes:    1323
 * Dislikes: 128
 * Total Accepted:    98.4K
 * Total Submissions: 234.4K
 * Testcase Example:  '13\n2'
 *
 * Given two integers n and k, return the k^th lexicographically smallest
 * integer in the range [1, n].
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: n = 13, k = 2
 * Output: 10
 * Explanation: The lexicographical order is [1, 10, 11, 12, 13, 2, 3, 4, 5, 6,
 * 7, 8, 9], so the second smallest number is 10.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: n = 1, k = 1
 * Output: 1
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= k <= n <= 10^9
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int count(int n, long long pre1, long long pre2) {
        int steps = 0;
        while (pre1 <= n) {
            steps += min((long long)n + 1, pre2) - pre1;
            pre1 *= 10;
            pre2 *= 10;
        }
        return steps;
    }
    int findKthNumber(int n, int k) {
        int curr = 1;
        k--;
        while (k > 0) {
            int nums = count(n, curr, curr + 1);
            if (nums <= k) {
                curr++;
                k -= nums;
            } else {
                curr *= 10;
                k--;
            }
        }
        return curr;
    }
};
// @lc code=end

