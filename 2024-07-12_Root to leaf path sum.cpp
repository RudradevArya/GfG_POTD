
//https://www.geeksforgeeks.org/problems/root-to-leaf-path-sum/1
//12 july 24

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution {
  public:
    bool recursion(Node *root, int target, int sum){
        //base
        if(!root){
            return false;
        }
        //recusion
        
        sum += root->data;
        if(!root->left && !root->right){
            return sum==target;
        }
        return recursion(root->left,target,sum) || recursion(root->right,target,sum);
    }
    
    bool hasPathSum(Node *root, int target) {
        // Your code here
        return  recursion(root,target,0);
        
    }
};