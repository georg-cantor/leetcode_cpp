/*
 * @lc app=leetcode id=155 lang=cpp
 *
 * [155] Min Stack
 *
 * https://leetcode.com/problems/min-stack/description/
 *
 * algorithms
 * Easy (39.69%)
 * Likes:    2710
 * Dislikes: 279
 * Total Accepted:    422K
 * Total Submissions: 1M
 * Testcase Example:  '["MinStack","push","push","push","getMin","pop","top","getMin"]\n' +
  '[[],[-2],[0],[-3],[],[],[],[]]'
 *
 * Design a stack that supports push, pop, top, and retrieving the minimum
 * element in constant time.
 * 
 * 
 * push(x) -- Push element x onto stack.
 * pop() -- Removes the element on top of the stack.
 * top() -- Get the top element.
 * getMin() -- Retrieve the minimum element in the stack.
 * 
 * 
 * 
 * 
 * Example:
 * 
 * 
 * MinStack minStack = new MinStack();
 * minStack.push(-2);
 * minStack.push(0);
 * minStack.push(-3);
 * minStack.getMin();   --> Returns -3.
 * minStack.pop();
 * minStack.top();      --> Returns 0.
 * minStack.getMin();   --> Returns -2.
 * 
 * 
 * 
 * 
 */

// @lc code=start
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack(): min_element{std::numeric_limits<int>::max()}, stack{} {}
    
    void push(int x) {
        stack.push_back(x);
        if (x < min_element) {
            min_element = x;
        }
    }
    
    void pop() {
        if (min_element == top()) {
            stack.pop_back();
            min_element = std::numeric_limits<int>::max();
            for (auto element: stack) {
                if (element < min_element) {
                    min_element = element;
                }
            }
        } else {
            stack.pop_back();
        }
    }
    
    int top() {
        return stack.back();
    }
    
    int getMin() {
        return min_element;
    }

private:
    int min_element;
    std::vector<int> stack;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
