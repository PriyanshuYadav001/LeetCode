/*
 * @lc app=leetcode id=3335 lang=cpp
 *
 * [3335] Total Characters in String After Transformations I
 */

// @lc code=start
class Solution {
public:
    const int MOD=1e9+7;
    int lengthAfterTransformations(string s, int t) {
        int n=s.length();
        vector<int>mp(26,0);
        for(char &ch:s) mp[ch-'a']++;

        for(int i=0;i<t;i++){
            vector<int>temp(26,0);
            for(int i=0;i<26;i++){
                char ch=i+'a';
                int freq=mp[i];
                if(ch!='z'){
                    temp[ch-'a'+1]=(temp[ch-'a'+1]+freq)%MOD;
                } else{
                    temp[0]=(temp[0]+freq)%MOD;
                    temp[1]=(temp[1]+freq)%MOD;
                }
            }
            mp=move(temp);
        }
        int ans=0;
        for(int &i:mp){
            ans=(ans+i)%MOD;
        }
        return ans;
    }
};
// @lc code=end

