/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int left=0, right=n-1;
        char res=letters[0];
        while(left<=right){
            int mid=(left+right)/2;
            if(letters[mid]>target){
                res=letters[mid];
                right=mid-1;
            }
            else left=mid+1;
        }
        return res;
    }
};
// @lc code=end

