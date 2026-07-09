// 2807. Insert greatest common divisor in linked list

#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int gcd(int a, int b){
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    struct ListNode *cur = head;

    while (cur != NULL && cur->next != NULL){
        struct ListNode *newNode = (struct ListNode *)malloc(sizeof(struct ListNode));

        newNode->val = gcd(cur->val, cur->next->val);
        newNode->next = cur->next;
        cur->next = newNode;

        cur = newNode->next;
    }
    return head;
}