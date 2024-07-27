/*
https://www.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1
6 july 24

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    struct Node *next;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
        next = NULL; // IMPORTANTT buddy
    }
};
*/
class Solution {
  public:
    void traversal(Node *root, vector<Node*> &ans){
        if(root != NULL){
            // return ;
            traversal(root->left, ans);
            ans.push_back(root);
            traversal(root->right, ans);
        }
        
    }
    void populateNext(Node *root) {
        // code here
        vector<Node*> ans;
        traversal(root, ans);
        for(int i=0;i<ans.size()-1; ++i){
            ans[i]->next = ans[i+1];
        }
    }
};