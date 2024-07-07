
/*
https://www.geeksforgeeks.org/problems/ancestors-in-binary-tree/1
7 july 24
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/

class Solution {
  public:
    int x=0;
    bool recursion(struct Node *root, int target, vector<int> &ans){
        
        if(!root){
            return false;
        }
        if(root->data==target){
            return true;
        }
        
        
        if(recursion(root->left,target, ans) || recursion(root->right,target,ans)){
            ans.push_back(root->data);
            return true;
        }
        return false;
        // if(x==target){
            
        // }
    }
    // Function should return all the ancestor of the target node
    vector<int> Ancestors(struct Node *root, int target) {
        // Code here
        vector<int> ans;
        recursion(root,target,ans);
        return ans;
    }
};