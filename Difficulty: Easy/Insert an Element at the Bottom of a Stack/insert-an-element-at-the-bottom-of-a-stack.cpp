class Solution {
public:
    stack<int> insertAtBottom(stack<int> st, int x) {

        // Base Case
        if (st.empty()) {
            st.push(x);
            return st;
        }

        // Store top element
        int topv = st.top();
        st.pop();

        // Recursive call
        st = insertAtBottom(st, x);

        // Push back the stored element
        st.push(topv);

        return st;
    }
};