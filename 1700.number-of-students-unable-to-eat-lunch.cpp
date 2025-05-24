/*
 * @lc app=leetcode id=1700 lang=cpp
 *
 * [1700] Number of Students Unable to Eat Lunch
 */

// @lc code=start
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        deque<int> qst;
        stack<int> sw;
        for(int n:students) qst.push_back(n);
        for(int i=sandwiches.size()-1;i>=0;i--) sw.push(sandwiches[i]);
        int attempts=0;

        while(!sw.empty()){
            if(sw.top()==qst.front()){
                attempts=0;
                sw.pop();
                qst.pop_front();
            }
            else{
                attempts++;
                qst.push_back(qst.front());
                qst.pop_front();

                if(attempts==qst.size()) break;

            }
        }
        cout<<qst.size();
        return qst.size();

    }
};
// @lc code=end

