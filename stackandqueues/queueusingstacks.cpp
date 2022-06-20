class MyQueue {
public:
    stack<int> a,b;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!a.empty())
        {
            int temp=a.top();
            a.pop();
            b.push(temp);
        }
        b.push(x);
        while(!b.empty())
        {
            int temp=b.top();
            b.pop();
            a.push(temp);
        }
        
    }
    
    int pop() {
        if(!a.empty()){
        int temp=a.top();
        a.pop();
        return temp;
        }
        else
            return -1;
    }
    
    int peek() {
         if(!a.empty()){
         int temp=a.top();
    
        return temp; 
        }
        else
            return -1;
     
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */