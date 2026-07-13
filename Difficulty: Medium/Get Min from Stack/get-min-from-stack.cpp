#include <stack>
using namespace std;

class SpecialStack {
    stack<int> st;

public:
    void push(int x) {
        st.push(x);
    }

    void pop() {
        if (!st.empty())
            st.pop();
    }

    int peek() {
        if (st.empty()) return -1;
        return st.top();
    }

    bool isEmpty() {
        return st.empty();
    }

    int getMin() {
        if (st.empty()) return -1;

        stack<int> temp = st;
        int mn = temp.top();
        temp.pop();

        while (!temp.empty()) {
            mn = min(mn, temp.top());
            temp.pop();
        }

        return mn;
    }
};