// 160. Intersection of two linked list

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if (headA == NULL || headB == NULL){
        return NULL;
    }

    struct ListNode *p1 = headA;
    struct ListNode *p2 = headB;

    while (p1 != p2){
        if (p1 == NULL){
            p1 = headB;
        }else{
            p1 = p1->next;
        }

        if (p2 == NULL){
            p2 = headA;
        }else{
            p2 = p2->next;
        }
    }
    return p1;
}
