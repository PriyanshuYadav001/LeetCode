/*
 * @lc app=leetcode id=2578 lang=cpp
 *
 * [2578] Split With Minimum Sum
 */

// @lc code=start
class Solution {
public:
    int splitNum(int num) {
        vector<int> arr;
        while(num>0){
            arr.push_back(num%10);
            num/=10;
        }
        sort(arr.begin(),arr.end());
        int num1=0, num2=0;
        for(int i=0;i<arr.size();i+=2) num1=num1*10+arr[i];
        for(int i=1;i<arr.size();i+=2) num2=num2*10+arr[i];

        return num1+num2;
    }
};// @lc code=end

