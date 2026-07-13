// 19. Remove Nth node from the end of the list

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};
/*
SO the concept is to use a two pointer a fast one and a slow one and then
we take a initial gap between the slow and fast as N by traversing the 
fast pointer N times(nodes) then we traverse both until fast reaches end.
*/
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode dummy;
    dummy.next = head;

    struct ListNode *slow = &dummy;
    struct ListNode *fast = &dummy;

    for (int i = 0; i <= n; i++){
        fast = fast->next;
    }

    while (fast != NULL){
        fast = fast->next;
        slow = slow->next;
    }

    struct ListNode *temp = slow->next;
    slow->next = temp->next;
    free(temp);

    return dummy.next;
}