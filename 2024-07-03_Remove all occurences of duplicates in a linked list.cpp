
//https://www.geeksforgeeks.org/problems/remove-all-occurences-of-duplicates-in-a-linked-list/1
//3rd July 2024
/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        
        if(!head){
            return head;
        }
        
        Node* dummy = new Node(0);
        dummy->next = head;
        
        Node* prev=dummy;
        Node* curr=head;
        
        while(curr){
            bool duplicate=false;
            while(curr->next!= NULL && curr->data == curr->next->data){
                duplicate= true;
                Node* temp  =curr;
                curr=curr->next;
                delete temp;
            }
            if(duplicate){
                Node* temp =curr;
                curr=curr->next;
                delete temp;
                prev->next = curr;
            }else{
                // curr= curr->next;
                // prev= prev->next;
                prev = prev->next;
                curr = curr->next;
            }
        }
        
        
        
        Node* newhead = dummy->next;
        delete dummy;
        return newhead;
          
        
        
    //     Node* curr = head;
    //     while(curr != NULL){
    //         // stack<int> s;
    //         // s.push(curr->data);
    //         vector<int> v;
    //         int d = curr->data;
    //         v.push_back(d);
    //         for(auto& x: v){
    //             if(x == d){
    //                 delete curr;
    //             }
    //         }
    //         curr = curr->next;
    //     }
    // }
    // return head;
// };
    }
};