//https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1
//30th June 24
/* Structure of Node
struct Node 
{
  int data;
  struct Node *next;
  struct Node *prev;

  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }

};
*/

class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // Your code here
        
        
        //if LL empty
        if(head == NULL) return NULL;
        
        Node* curr = head;
        
        //if head to be removed
        if(x==1){
            head=curr->next;
            if(head!= NULL)
                head->prev= NULL;
            delete curr;
            return head;
        }
        //parsing thru the nodes
        for(int i=1; curr!=NULL && i<x;++i)
            curr=curr->next;
            
        //if its the last node
        if(curr==NULL) return head;
        
        //if not last node
        if(curr->next != NULL)
            curr->next->prev = curr->prev;
            
        //changing next if not lasta node
        if (curr->prev != NULL)
            curr->prev->next = curr->next;
        
        delete curr;

        return head;
        // while(curr != NULL){
        //     if(curr->data == x){
        //         curr->prev->next = curr-> next;
        //         curr->next->prev = curr->prev;
        //     }
        // }
    }
};