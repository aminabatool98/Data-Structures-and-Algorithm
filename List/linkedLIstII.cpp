/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int val) {
        data = val;
        next = nullptr;
    }
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
         ListNode *fast=head;
         bool iscycle=false;
         while(fast!=nullptr  &&  fast->next !=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            if(slow == fast){
                iscycle= true;
                break;
            }
         }
         if(!iscycle){
            return nullptr;
         }
         slow=head;
         while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
         }
         return slow;
    }
};