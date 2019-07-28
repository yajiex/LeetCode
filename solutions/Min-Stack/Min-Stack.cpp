
// class MinStack {
// private:
//     stack<int> st;
//     stack<int> minst;
// public:
//     void push(int x) {
//         st.push(x);
//         if(minst.empty() || x<=minst.top())
//             minst.push(x);
//     }

//     void pop() {
//         if(st.top() == minst.top())
//             minst.pop();
//         st.pop();
//     }

//     int top() {
//         return st.top();
//     }

//     int getMin() {
//         return minst.top();
//     }
// };

// 2019-07-28
// O(1)
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        st = stack<int>();
        minSt = stack<int>();
    }
    
    void push(int x) {
        st.push(x);
        if(minSt.empty() || minSt.top() >= x)
        {
            minSt.push(x);
        }
    }
    
    void pop() {
        if(st.top() == minSt.top())
        {
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
private:
    stack<int> st;
    stack<int> minSt;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
 