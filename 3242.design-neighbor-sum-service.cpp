/*
 * @lc app=leetcode id=3242 lang=cpp
 *
 * [3242] Design Neighbor Sum Service
 */

// @lc code=start
class NeighborSum {
public:
    vector<vector<int>> arr;
    int n;
    NeighborSum(vector<vector<int>>& grid) { 
        this->arr=grid;
        n=arr.size();
    }
    int adjacentSum(int value) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == value) {
                    int val = 0;
                    if (j > 0)
                        val += arr[i][j - 1];
                    if (i > 0)
                        val += arr[i - 1][j];
                    if (i < arr.size() - 1)
                        val += arr[i + 1][j];
                    if (j < arr.size() - 1)
                        val += arr[i][j + 1];
                    return val;
                }
            }
        }
        return -1;
    }

    int diagonalSum(int value) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] == value) {
                    int val = 0;
                    if (i - 1 >= 0 && j - 1 >= 0)
                        val += arr[i - 1][j - 1];
                    if (i + 1 < n && j + 1 < n)
                        val += arr[i + 1][j + 1];
                    if (i + 1 < n && j - 1 >= 0)
                        val += arr[i + 1][j - 1];
                    if (i - 1 >= 0 && j + 1 < n)
                        val += arr[i - 1][j + 1];

                    return val;
                }
            }
        }
        return -1;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */
// @lc code=end

