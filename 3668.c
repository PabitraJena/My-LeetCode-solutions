// 3668. Restore Finishing Order

int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    int* ans = (int*)malloc(friendsSize * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < orderSize; i++) {
        for (int j = 0; j < friendsSize; j++) {
            if (order[i] == friends[j]) {
                ans[(*returnSize)++] = order[i];
                break;
            }
        }
    }

    return ans;
}