// 23. Merge k Sorted Lists

#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* merge2(struct ListNode *a, struct ListNode *b){
    struct ListNode head;
    struct ListNode *ptr = &head;
    head.next = NULL;

    while (a && b){
        if (a->val <= b->val){
            ptr->next = a;
            a = a->next;
        }else{
            ptr->next = b;
            b = b->next;
        }
        ptr = ptr->next;
    }
    ptr->next = a ? a : b;

    return head.next;
}

struct ListNode* merge(struct ListNode **lists, int l, int r){
    if (l > r){
        return NULL;
    }

    if (l == r){
        return lists[l];
    }

    int mid = l + (r - l) / 2;

    struct ListNode *a = merge(lists, l, mid);
    struct ListNode *b = merge(lists, mid + 1, r);

    return merge2(a, b);
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    return merge(lists, 0, listsSize - 1);
}