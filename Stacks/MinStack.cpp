class MinStack {
public:
    stack<long long int>stk;
    long long int minval;
    MinStack() {
        
    }
    
    void push(int val) {
        if(stk.empty()){
            stk.push(val);
            minval=val;
        }else{
            if(val <minval ){
                stk.push((long long)2*val - minval);
                minval=val;
            }else{
                stk.push(val);
            }
        }
    }
    
    void pop() {
       
            if(stk.top() < minval){
                 minval=2*minval -stk.top();
            }
              
        stk.pop();
    }
    
    int top() {
        if(stk.top()<minval){
            return minval;
        }
        return stk.top();
    }
    
    int getMin() {
        return minval;
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