//  2058. Find the Minimum and Maximum Number of Nodes Between Critical Points

#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

int* nodesBetweenCriticalPoints(struct ListNode* head, int* returnSize) {
    int *ans = (int *)malloc(2 * sizeof(int));
    *returnSize = 2;

    ans[0] = -1;
    ans[1] = -1;

    if (head == NULL || head->next == NULL || head->next->next == NULL)
        return ans;

    struct ListNode *prev = head;
    struct ListNode *curr = head->next;

    int pos = 1;
    int first = -1;
    int last = -1;
    int minDist = 1000000;

    while (curr->next != NULL) {
        int isCritical = 0;

        if ((curr->val > prev->val && curr->val > curr->next->val) ||
            (curr->val < prev->val && curr->val < curr->next->val)){
            isCritical = 1;
        }

        if (isCritical){
            if (first == -1){
                first = pos;
            } else{
                int dist = pos - last;

                if (dist < minDist)
                    minDist = dist;
            }

            last = pos;
        }

        prev = curr;
        curr = curr->next;
        pos++;
    }

    if (first == -1 || first == last){
        ans[0] = -1;
        ans[1] = -1;
        return ans;
    }

    ans[0] = minDist;

    ans[1] = last - first;

    return ans;
}