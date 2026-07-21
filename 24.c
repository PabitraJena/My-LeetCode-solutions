// 24. Swap nodes in pair

/*
[1] -> [2] -> [3] -> [4]

[2] -> [1] -> [4] -> [3]

*/

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode dummy;
    dummy.next = head;

    struct ListNode *temp = &dummy;

    while (temp->next != NULL && temp->next->next != NULL) {
        struct ListNode *first = temp->next;
        struct ListNode *second = first->next;

        first->next = second->next;
        second->next = first;
        temp->next = second;

        temp = first;
    }

    return dummy.next;
}