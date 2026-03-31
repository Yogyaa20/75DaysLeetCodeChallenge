class MinStack {
public:
    stack<int> st;       // main stack
    stack<int> minSt;
    public:
    MinStack() {
        // both stacks start empty
    }
    
    void push(int val) {
        st.push(val);
        // push into minSt if empty or val <= current min
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }
    
    void pop() {
        // if top of st equals top of minSt, pop both
        if (st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */