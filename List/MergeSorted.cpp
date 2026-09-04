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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        // If either list is empty
        if (list1 == nullptr || list2 == nullptr) {
            return list1 == nullptr ? list2 : list1;
        }

        // Choose the smaller node
        if (list1->data <= list2->data) {

            list1->next = mergeTwoLists(list1->next, list2);

            return list1;

        } else {

            list2->next = mergeTwoLists(list1, list2->next);

            return list2;
        }
    }
};