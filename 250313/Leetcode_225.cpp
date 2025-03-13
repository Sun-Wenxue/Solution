class MyStack {
private:
    queue<int> que;
public:
    MyStack() {

    }

    void push(int x) {
        que.push(x);
    }

    int pop() {
        int length = que.size(), elem;
        for(int i = 0; i < length - 1; i++){
            elem = que.front();
            que.pop();
            que.push(elem);
        }
        elem = que.front();
        que.pop();
        return elem;
    }

    int top() {
        int length = que.size(), elem;
        for(int i = 0; i < length; i++){
            elem = que.front();
            que.pop();
            que.push(elem);
        }
        return elem;
    }

    bool empty() {
        return que.empty();
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