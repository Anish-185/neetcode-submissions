class MinStack {
public:
    stack<int> st1;
    stack<int> minstack;
    MinStack() {}
    
    void push(int val) {
        st1.push(val);
        val=min(val,minstack.empty() ? val : minstack.top());
        minstack.push(val);
        
        
    }
    
    void pop() {
        st1.pop();
        minstack.pop();
    }
    
    int top() {
        return st1.top();
        
    }
    
    int getMin() {
        return minstack.top();
    }
};
