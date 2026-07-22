// 234. Palindrome Linked List


#include <stdio.h>
#include <stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool isPalindrome(struct ListNode* head){
    if (head == NULL || head->next == NULL){
        return true;
    }

    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    struct ListNode *curr = slow->next;
    struct ListNode *prev = NULL;

    while (curr != NULL){
        struct ListNode *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp; 
    }
    
    struct ListNode *l = head;
    struct ListNode *r = prev;

    while (r != NULL){
        if (l->val != r->val){
            return false;
        }
        l = l->next;
        r = r->next;
    }
    return true;
}