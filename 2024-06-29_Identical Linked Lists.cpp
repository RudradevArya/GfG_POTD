//https://www.geeksforgeeks.org/problems/identical-linked-lists/1
//29 June 24
/*
Structure of the node of the linked list is as
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to check whether two linked lists are identical or not.
bool areIdentical(struct Node *head1, struct Node *head2) {
    // Code here
    Node *curr1 = head1;
    Node *curr2 = head2;
    
    while(curr1!=NULL && curr2 != NULL){
        if(curr1->data != curr2->data){
            return false;
        }
        curr1 = curr1 -> next;
        curr2 = curr2 -> next;
    }
    
    
    if(curr1 != curr2){
        return false;
    }
    return true;
    
}