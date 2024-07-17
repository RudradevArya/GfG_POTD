
//https://www.geeksforgeeks.org/problems/construct-binary-tree-from-parent-array/1
//17 july 24
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to construct binary tree from parent array.
    Node *createTree(vector<int> parent) {
        // Your code here
        int n=parent.size();
        Node* node[n], *root;
        for(int i=0; i<n;++i){
            node[i]=new Node(i);
        }
        for(int i=0;i<n;++i){
            if(parent[i]==-1){
                root=node[i];
            }
            else{
                if(node[parent[i]]->left == NULL){
                    node[parent[i]]->left = node[i]; 
                }else{
                    node[parent[i]]->right= node[i];
                }
            }
            
        }
        return root;
         
    }
};