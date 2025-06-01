/*
 * @lc app=leetcode id=835 lang=cpp
 *
 * [835] Image Overlap
 */

// @lc code=start
class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size();
        vector<pair<int,int>> vec1,vec2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(img1[i][j]==1) vec1.push_back({i,j});
                if(img2[i][j]==1) vec2.push_back({i,j});
            }
        }

        int res=0;
        map<pair<int,int>,int> mp;
        for(auto v1:vec1){
            for(auto v2:vec2){
                mp[{v1.first-v2.first,v1.second-v2.second}]++;
                res=max(res,mp[{v1.first-v2.first,v1.second-v2.second}]);
            }
        }
        return res;
    }
};
// @lc code=end

