class MyQueue {
private:
    stack<int> inStack, outStack;
    void assginElem(){
        int elem;
        while(!inStack.empty()){
            elem = inStack.top();
            inStack.pop();
            outStack.push(elem);
        }
    }
public:
    MyQueue() {

    }

    void push(int x) {
        inStack.push(x);
    }

    int pop() {
        if(outStack.empty()){   // 每当out栈空了再补充in栈里积累的序列，相当于分段处理，不会扰乱顺序
            assginElem();
        }
        int front = outStack.top();
        outStack.pop();
        return front;
    }

    int peek() {
        if(outStack.empty()){
            assginElem();
        }
        return outStack.top();
    }

    bool empty() {
        return inStack.empty() && outStack.empty();
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