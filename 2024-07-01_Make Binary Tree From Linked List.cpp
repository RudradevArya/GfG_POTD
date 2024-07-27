//https://www.geeksforgeeks.org/problems/make-binary-tree/1
//1 July 24
/*
The structure of Link list Node is as follows
struct Node
{
    int data;
    struct node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
The structure of TreeNode is as follows
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;
};
*/

// Function to make binary tree from linked list.
void convert(Node *head, TreeNode *&root) {
    // Your code here
    if(head==NULL){
        root=NULL;
        return;
    }
    
    root = new TreeNode(head->data);
    head=head->next;
    
    queue<TreeNode*> q;
    q.push(root);
    
    while(head){
        TreeNode* parent = q.front();
        q.pop();
        
        TreeNode* Left = new TreeNode(head->data);
        parent->left = Left;
        q.push(Left);
        head = head->next;
        if (!head) break;
        
        TreeNode* Ryt = new TreeNode(head->data);
        parent->right = Ryt;
        q.push(Ryt);
        head = head->next;
        
    }
}

void printlvl(TreeNode* root){
    if(root == NULL){
        return;
    }
    
    queue<TreeNode*> q;
    q.push(root);
    
    
    while(!q.empty()){
        TreeNode* node = q.front();
        cout<<node->data<<" ";
        q.pop();
        
        if(node->left){
            q.push(node->left);
        }
        if(node->right){
            q.push(node->right);
        }
    }
}