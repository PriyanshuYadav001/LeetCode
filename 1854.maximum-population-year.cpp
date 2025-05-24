/*
 * @lc app=leetcode id=1854 lang=cpp
 *
 * [1854] Maximum Population Year
 */

// @lc code=start
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> population(2051,0);
        for(auto l:logs){
            for(int i=l[0];i<l[1];i++){
                population[i]++;
            }
        }
        int max_p=0;
        int idx=0;
        for(int i=0;i<population.size();i++){
            if(population[i]>max_p){
                max_p=population[i];
                idx=i;
            }
        }
        return idx;
    }
};
// @lc code=end

