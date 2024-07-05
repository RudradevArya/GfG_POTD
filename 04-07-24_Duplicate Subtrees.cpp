
//https://www.geeksforgeeks.org/problems/duplicate-subtrees/1
//4 July 24
// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };

class Solution {
  public:
    vector<Node*> printAllDups(Node* root) {
        // Code here
        
        map<string,int> m;
        vector<Node*> ans;
        
        recursion(root, m,ans);
        return ans;
    }
    
    string recursion(Node* root,map<string,int> &m,
    vector<Node*> &ans){
        //base caese
        if(!root){
            return "N";
        }
        
        //recursive 
        string s= to_string(root->data) + "," 
        + recursion(root->left,m,ans ) + ","
        + recursion(root->right,m,ans );
        
        // m.push_back[s];
        m[s]++;
        if(m[s]==2){
            ans.push_back(root);
        }
        return s;
    }
};