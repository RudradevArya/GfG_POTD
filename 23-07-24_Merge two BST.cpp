//https://www.geeksforgeeks.org/problems/merge-two-bst-s/1
//23 july 24
/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    void inorder(Node *root, vector<int> &ans){
        if(!root){
            return;
        }
        
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int> ans;
        inorder(root1,ans);
        inorder(root2, ans);
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};