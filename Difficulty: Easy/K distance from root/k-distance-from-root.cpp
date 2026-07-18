/* Binary Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    // int level(Node*root){
    //     if(root==nullptr) return 0;
    //     return 1+max(level(root->left),level(root->right));
    // }
    void display(Node* root, int curr, int tar, vector<int> &ans){
        if(root==nullptr) return ;
        if(curr==tar) {
            ans.push_back(root->data);
            return ;
        }
        display(root->left,curr+1,tar,ans);
        display(root->right,curr+1,tar,ans);
    }
    void kdis(Node*root,vector<int> &ans,int tar){
        display(root,0,tar,ans);
    }
    vector<int> kdistance(int k, Node *root) {
        // code here
        vector<int> ans;
        kdis(root,ans,k);
        return ans;
        
    }
};