/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = nullptr;
    }
};*/

class Solution {
  public:
    Node*reverse(Node*head){
        Node*prev=nullptr;
        Node*curr=head;
        while(curr!=nullptr){
            Node*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(Node *head) {
        //  code here
        Node*slow=head;
        Node*fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node*second=reverse(slow->next);
        while(second!=nullptr){
            if(head->data!=second->data) return false;
            head=head->next;
            second=second->next;
        }
        return true;
        
        
    }
};