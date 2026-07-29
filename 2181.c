#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeNodes(struct ListNode* head) {
    struct ListNode *curr = head->next;
    struct ListNode *dummy = (struct ListNode *)malloc(sizeof(struct ListNode));
    dummy->next = NULL;

    struct ListNode *tail = dummy;

    while (curr != NULL){
        int sum = 0;

        while (curr != NULL && curr->val != 0){
            sum += curr->val;
            curr = curr->next;
        }

        if (curr != NULL){
            struct ListNode *node = (struct ListNode *)malloc(sizeof(struct ListNode));
            node->val = sum;
            node->next = NULL;

            tail->next = node;
            tail = node;

            curr = curr->next;
        }
    }

    struct ListNode *ans = dummy->next;
    free(dummy);

    return ans;
}