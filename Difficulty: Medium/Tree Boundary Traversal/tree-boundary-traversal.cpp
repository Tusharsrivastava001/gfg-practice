/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    void lefti(Node*root,vector<int> &ans){
        if(root==nullptr) return ;
        if(root->left==nullptr && root->right==nullptr) return;
        ans.push_back(root->data);
        lefti(root->left,ans);
        if(root->left==nullptr){
            lefti(root->right,ans);
        }
        
    }
    void leaf(Node*root,vector<int> &ans){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
    }
    leaf(root->left,ans);
    leaf(root->right,ans);
}
    void righti(Node*root,vector<int> &ans){
        if(root==nullptr) return ;
        if(root->left==nullptr && root->right==nullptr) return;
        
        righti(root->right,ans);
        if(root->right==nullptr){
            righti(root->left,ans);
        }
        ans.push_back(root->data);
        
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        if(root == NULL)
     return {};

    if(root->left == NULL && root->right == NULL)
    return {root->data};
        vector<int> ans;
        

    ans.push_back(root->data);
        lefti(root->left,ans);
        leaf(root,ans);
        righti(root->right,ans);
        
        return ans;
        
    }
};