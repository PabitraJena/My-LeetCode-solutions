// 142. Linked List cycle II
#include <stdio.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode *detectCycle(struct ListNode *head) {
    
    struct ListNode *a = head;
    struct ListNode *b = head;
    
    while (b != NULL && b->next != NULL){
        a = a->next;
        b = b->next->next;
        if (a == b){
            break;  
        }
    }
    if (b == NULL || b->next == NULL){
        return NULL;
    }
    
    while (head != a){
        head = head->next;
        a = a->next;
    }
    return head;
}