
 //Definition for singly-linked list.
 struct ListNode {
    int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
     if(head == nullptr || head->next ==nullptr){
        return head;
     }   
     ListNode * first=head;
     ListNode * sec=head->next;
     ListNode * prev=nullptr;

     while(first !=nullptr && sec !=nullptr){
        ListNode * third=sec->next;
        sec->next=first;
        first->next=third;
        if(prev != nullptr){
            prev->next=sec;
        }else{
            head=sec;
        }
        // update
        prev=first;
        first=third;
        if(third !=nullptr){
            sec=third->next;
        }else{
            sec=nullptr;
        }
     }
     return head;

    }
};




        
 
