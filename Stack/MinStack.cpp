/*

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.


*/

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s1;
    stack<int> s2;

    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) 
    {
        s1.push(x);
        if(s2.empty())
            s2.push(x);
        else{
            if(x<=s2.top()){
                s2.push(x);
            }
        }
    }
    
    void pop() {
        if(!s1.empty()){
        if(s1.top()==s2.top())
        {
            s2.pop();
            s1.pop();
        }
        else
         s1.pop();
    }
    }
    int top() {
        return s1.top();
    }
    
    int getMin() {
        if(!s2.empty())
            return s2.top();
        else
            return s1.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
