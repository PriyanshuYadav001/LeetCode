/*
 * @lc app=leetcode id=2231 lang=cpp
 *
 * [2231] Largest Number After Digit Swaps by Parity
 */

// @lc code=start
class Solution {
public:
    int largestInteger(int num) {
        vector<char> even;
        vector<char> odd;
        string str=to_string(num);

        for(char c:str){
            int n=c-'0';
            if(n%2==0) even.push_back(c);
            else odd.push_back(c);
        }
        sort(even.rbegin(),even.rend());
        sort(odd.rbegin(),odd.rend());
        int e=0,o=0;
        string res="";
        for(char c:str){
            if((c-'0')%2==0){
                res+=even[e];
                e++;
            }
            else{
                res+=odd[o];
                o++;
            }
        }
        return stoi(res);
    }
};
// @lc code=end

