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
    bool hasCycle(ListNode *head) {
        ListNode *slow=head;
         ListNode *fast=head;
         while(fast !=nullptr && fast->next !=nullptr){
            fast=fast->next->next;
            slow=slow->next;
            if(fast == slow) return true;
         }
         return false;
    }
};