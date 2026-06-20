// 2. Add two numbers
#include <stdio.h>
#include <stdlib.h>

struct ListNode{
    int value;
    struct ListNode *next;
};

struct ListNode* createNode(int value){
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode dummy;
    dummy.next = NULL;

    struct ListNode* curr = &dummy;
    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry){ // untill L1 or L2 is not Null or untill carry is not 0
        int x = (l1 != NULL) ? l1->value : 0;
        int y = (l2 != NULL) ? l2->value : 0;

        int sum = x + y + carry;
        carry = sum / 10;

        curr->next = createNode(sum % 10);
        curr = curr->next;

        if (l1 != NULL){
            l1 = l1->next;
        }
        if (l2 != NULL){
            l2 = l2->next;
        }
    }
    return dummy.next;
}