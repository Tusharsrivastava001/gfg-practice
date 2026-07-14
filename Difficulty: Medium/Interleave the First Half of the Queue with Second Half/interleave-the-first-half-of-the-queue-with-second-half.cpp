class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        std::stack<int> st;
        int mid=q.size()/2;
        //push the first half element in the stack
        for(int i=0;i<mid;i++){
            st.push(q.front());
            q.pop();
        }
        
        //here push back to stack to the queue
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        //deque the first half elemr of queue and enque then back 
        for(int i=0;i<mid;i++){
            q.push(q.front());
            q.pop();
        }
        
        for(int i=0;i<mid;i++){
            st.push(q.front());
            q.pop();
        }
        
        while(!st.empty()){
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
        
    }
};