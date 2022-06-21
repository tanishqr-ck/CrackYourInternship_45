class MyStack {
public:
    queue<int> a;
    
    MyStack() {
        
    }
    
    void push(int x) {
      a.push(x);  
    }
    
    int pop() {
        queue<int> b;
       while(a.size()>1)
       {
           int t=a.front();
           b.push(t);
           a.pop();
       }
        int data=a.front();
        a.pop();
        a=b;
        return data;
    }
    
    int top() {
        return a.back();
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */