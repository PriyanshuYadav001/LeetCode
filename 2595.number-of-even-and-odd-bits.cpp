/*
 * @lc app=leetcode id=2595 lang=cpp
 *
 * [2595] Number of Even and Odd Bits
 */

// @lc code=start
class Solution {
public:

    string revIntToBin(int num){
        string res="";
        while(num>1){
            if(int(num)%2==0)res+='0';
            else res+='1';
            num/=2;
        }
        res+='1';
        return res;
    }
    
    vector<int> evenOddBit(int n) {
        string str=revIntToBin(n);
        int even=0,odd=0;
        for(int i=0;i<str.size();i++){
            if(i%2==0 && str[i]=='1') even++;
            else if(i%2==1 && str[i]=='1') odd++;
        }
        return {even,odd};
    }
};
// @lc code=end

