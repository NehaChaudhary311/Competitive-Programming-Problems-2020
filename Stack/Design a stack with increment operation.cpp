/*

void inc(int k, int val) Increments the bottom k elements of the stack by val. If there are less than k elements in the stack, just increment all the elements in the stack.

*/
class CustomStack {
public:
    vector<int> stk;
    int top, max;
    CustomStack(int maxSize) {
        top = 0;
        max = maxSize;
    }
    
    void push(int x) {
        if (top == max)
            return;
        stk.push_back(x);
        ++top;
    }
    
    int pop() {
        if (top == 0)
            return -1;
        int popped = stk.back();
        stk.pop_back();
        --top;
        return popped;
    }
    
    void increment(int k, int val) {
        for (int i=0; i<min(k, top); ++i)
            stk[i] += val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
