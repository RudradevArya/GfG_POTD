
//https://www.geeksforgeeks.org/problems/linked-list-of-strings-forms-a-palindrome/1
//2nd July 24
/*
The structure of linked list is the following
struct Node
{
    string data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool compute(Node* head) {
        // Your code goes here
        Node* temp = head;
        string ans;
        while(temp!= NULL){
            
            ans+= temp->data;
            temp = temp->next;
        }
        return palin(ans);
        
        
    }
    
    bool palin(string ans){
        int n = ans.length();
        for(int i=0; i<n;++i){
            if(ans[i] != ans[n-1-i]){
                return false;
            }
        }
        return true;
    }
};