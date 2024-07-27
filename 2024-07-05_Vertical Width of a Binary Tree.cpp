//https://www.geeksforgeeks.org/problems/vertical-width-of-a-binary-tree/1
//5 july 24
// struct Node {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     Node(int x) {
//         data = x;
//         left = right = NULL;
//     }
// };
class Solution {
  public:
    int mini=0, maxi=0;
    void recursion(Node* root, int travelDist){
        if(!root){
            return;
        }
        
        mini=min(travelDist, mini);
        maxi=max(travelDist, maxi);
        
        recursion(root->left, travelDist-1);
        recursion(root->right, travelDist+1);
        
    }
    // Function to find the vertical width of a Binary Tree.
    int verticalWidth(Node* root) {
        // code here
        if(!root){
            return 0;
        }
        recursion(root,0);
        return maxi - mini + 1;
    }
    
    
};
