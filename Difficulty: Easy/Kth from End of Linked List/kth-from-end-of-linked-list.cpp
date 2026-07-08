/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        int count=0;
        Node*temp=head;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        Node*t1=head;
        for(int i=1;i<=count-k;i++){
            t1=t1->next;
        }
        if (k > count)
            return -1;

        return t1->data;
    }
};