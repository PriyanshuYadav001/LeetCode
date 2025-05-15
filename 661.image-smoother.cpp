/*
 * @lc app=leetcode id=661 lang=cpp
 *
 * [661] Image Smoother
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int r=img.size();
        int c=img[0].size();

        vector<vector<int>> res(r,vector<int>(c,0));

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int sum=0,count=0;

                for(int k=max(0,i-1);k<min(r,i+2);k++){
                    for(int l=max(0,j-1);l<min(c,j+2);l++){
                        sum+=img[k][l];
                        count++;
                    }
                }
                res[i][j]=sum/count;
            }
        }
        return res;
    }
};
// 
@lc code=end

