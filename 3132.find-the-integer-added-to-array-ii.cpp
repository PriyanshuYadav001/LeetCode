/*
 * @lc app=leetcode id=3132 lang=cpp
 *
 * [3132] Find the Integer Added to Array II
 */

// @lc code=start
class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int res=INT_MAX;

        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                vector<int> arr;
                for(int k=0;k<m;k++){
                    if(k!=i && k!=j) arr.push_back(nums1[k]);
                }

                int x=nums2[0]-arr[0];
                bool check=true;
                
                for(int k=0;k<n;k++){
                    if(nums2[k]!=arr[k]+x){
                        check=false;
                        break;
                    }
                }
                if(check==true){
                    res=min(res,x);
                }
            }
        }
        return res;
    }
};
// @lc code=end

