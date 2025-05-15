/*
 * @lc app=leetcode id=1381 lang=cpp
 *
 * [1381] Design a Stack With Increment Operation
 */

// @lc code=start
class CustomStack {
public:
    int maxSize;
    CustomStack(int maxSize) {
        this->maxSize=maxSize;
    }
    vector<int> stk;
    void push(int x) {
        if(stk.size()<maxSize){
            stk.push_back(x);
        }
    }
    
    int pop() {
        if(stk.empty()) return -1;
        int val=stk.back();
        stk.pop_back();
        return val;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k && i<stk.size();i++){
            stk[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
// @lc code=end

