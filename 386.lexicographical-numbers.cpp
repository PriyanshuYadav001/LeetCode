/*
 * @lc app=leetcode id=386 lang=cpp
 *
 * [386] Lexicographical Numbers
 *
 * https://leetcode.com/problems/lexicographical-numbers/description/
 *
 * algorithms
 * Medium (73.06%)
 * Likes:    2722
 * Dislikes: 191
 * Total Accepted:    265.8K
 * Total Submissions: 363.9K
 * Testcase Example:  '13'
 *
 * Given an integer n, return all the numbers in the range [1, n] sorted in
 * lexicographical order.
 * 
 * You must write an algorithm that runs in O(n) time and uses O(1) extra
 * space. 
 * 
 * 
 * Example 1:
 * Input: n = 13
 * Output: [1,10,11,12,13,2,3,4,5,6,7,8,9]
 * Example 2:
 * Input: n = 2
 * Output: [1,2]
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= n <= 5 * 10^4
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    void backtrack(vector<int>& res, int n, int num) {
        if (num > n)
            return;
        res.push_back(num);
        num *= 10;
        for (int i = 0; i < 10; i++)
            backtrack(res, n, num + i);
    }

    vector<int> lexicalOrder(int n) {
        vector<int> res;
        if (n == 1)
            return {1};
        for (int i = 1; i < 10; i++)
            backtrack(res, n, i);
        return res;
    }
};
// @lc code=end

