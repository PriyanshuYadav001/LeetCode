/*
 * @lc app=leetcode id=3343 lang=cpp
 *
 * [3343] Count Number of Balanced Permutations
 */

// @lc code=start
class Solution {
public:
    int n;
    int digitSum;
    int M=1e9+7;
    long long res=0;

    int findPow(long long a,long long b){
        if(b==0) return 1;

        long long half=findPow(a,b/2);
<<<<<<< HEAD
        long long r=(half*half)%M;

        if(b%2==1) r=(r*a)%M;

        return r;
    }

    long long solve(int digit,int evenIndexDigitsCount,int currSum,vector<int>& freq,vector<long long>& fermatFact, vector<vector<vector<int>>>& dp) {
    if(digit==10){
        if(currSum==digitSum/2 && evenIndexDigitsCount==(n+1)/2){
            return res;
=======
        long long res=(half*half)%M;

        if(b%2==1) res=(res*a)%M;

        return res;
    }

    long long solve(int digit, int evenIndexDigitsCount, int currSum, vector<int>& freq, vector<long long>& fermatFact) {
    if (digit == 10) {
        if (currSum == totalDigitSum / 2 && evenIndexDigitsCount == (n + 1) / 2) {
            return totalPermPossible;
>>>>>>> fe94aa0 (3335. solution)
        }
        return 0;
    }

<<<<<<< HEAD
    if(dp[digit][evenIndexDigitsCount][currSum]!=-1){
        return dp[digit][evenIndexDigitsCount][currSum];
    }
    

    long long ways=0;

    for (int count=0;count<=min(freq[digit],(n+1)/2-evenIndexDigitsCount);count++){
        int evenPosCount=count;
        int oddPosCount=freq[digit]-count;

        long long div=(fermatFact[evenPosCount]* fermatFact[oddPosCount])%M;
        long long val = solve(digit+1, evenIndexDigitsCount+evenPosCount, currSum + digit * count, freq,fermatFact,dp);
=======
    long long ways=0;

    for (int count=0;count<=min(freq[digit],(n+1)/2-evenIndexDigitsCount);count++){
        int evenPosCount = count;
        int oddPosCount = freq[digit] - count;

        long long div=(fermatFact[evenPosCount]* fermatFact[oddPosCount])%M;
        long long val = solve(digit+1, evenIndexDigitsCount+evenPosCount, currSum + digit * count, freq,fermatFact);
>>>>>>> fe94aa0 (3335. solution)

        ways = (ways + (val * div) % M) % M;
    }

<<<<<<< HEAD
    return dp[digit][evenIndexDigitsCount][currSum]=ways;
=======
    return ways;
>>>>>>> fe94aa0 (3335. solution)
}

    int countBalancedPermutations(string num) {
        digitSum=0;
        n=num.size();
        
        vector<int> freq(10,0);
        for(int i=0;i<n;i++){
            digitSum+=num[i]-'0';
            freq[num[i]-'0']++;
        }

        if(digitSum%2==1) return 0;

        vector<long long> fact(n+1,1);
        for(int i=1;i<n+1;i++){
            fact[i]=(fact[i-1]*i)%M;
        }

        vector<long long> fermatFact(n+1,1);
        for(int i=0;i<n+1;i++){
            fermatFact[i]=findPow(fact[i],M-2)%M;
        }

        int digit=0;
        int evenCount=0;
        int currSum=0;
<<<<<<< HEAD

        vector<vector<vector<int>>> dp(10,vector<vector<int>>((n+1)/2+1, vector<int>(digitSum+1,-1)));

        res=(1LL*fact[n-n/2]*fact[n/2])%M;

        return solve(digit,evenCount,currSum,freq,fermatFact,dp);
=======
        res=(1LL*fact[n-n/2]*fact[n/2])%M;

        return solve(digit,evenCount,currSum,freq,fermatFact);
>>>>>>> fe94aa0 (3335. solution)
    }
};
// @lc code=end

