
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
class Solution {
public:
    Node* flatten(Node* head) {
        if(head == nullptr){
            return head;
        }
        Node* curr=head;
    while(curr != nullptr){ 
        if(curr->child != nullptr){

         Node *remain=curr->next;
           curr->next= flatten(curr->child);
           curr->next->prev=curr;
           curr->child= nullptr;
           // to find out the tail;
           while(curr->next != nullptr){
            curr=curr->next;
           }

           if(remain != nullptr){
            curr->next=remain;
            remain->prev=curr;
           }
        }
        curr=curr->next;

    }
    return head;
        
    }
};