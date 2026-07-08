// 203. Remove linked list elements

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode dummy;
    dummy.next = head;
    
    struct ListNode *cur = head;
    struct ListNode *prev = &dummy;

    while (cur != NULL){
        if (cur->val == val){
            prev->next = cur->next;
            free(cur);
            cur = prev->next;
        }else{
            prev = cur;
            cur = cur->next;
        }
    }
    return dummy.next;
}