class MyQueue {
public:
stack<int> st1;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        int x = st1.top();
        st1.pop();
        if (st1.empty())
        {
            return x;
        }
        int tempa  = pop();
        st1.push(x);
        return tempa;
    }
    
    int peek() {
        if (st1.empty())
        {
            cout << "Queue is Underflow\n";
            return -1;
        }

        int x = st1.top();
        st1.pop();
        if (st1.empty())
        {
            st1.push(x);
            return x;
        }
        int temp = peek();
        st1.push(x);
        return temp;
    }
    
    bool empty() {
          if (st1.empty())
        {
            return 1;
        }
        return 0;
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