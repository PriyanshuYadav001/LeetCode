/*
 * @lc app=leetcode id=2326 lang=cpp
 *
 * [2326] Spiral Matrix IV
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> grid(m,vector<int>(n,-1));

        int top=0, bottom=m-1, left=0, right=n-1;

        while(head){
            for(int col=left;col<=right && head;col++){
                grid[top][col]=head->val;
                head=head->next;
            }
            top++;
            for(int row=top;row<=bottom && head;row++){
                grid[row][right]=head->val;
                head=head->next;
            }
            right--;
            for(int col=right;col>=left && head;col--){
                grid[bottom][col]=head->val;
                head=head->next;
            }
            bottom--;
            for(int row=bottom;row>=top && head;row--){
                grid[row][left]=head->val;
                head=head->next;
            }
            left++;
        }
        return grid;
    }
};
// @lc code=end

