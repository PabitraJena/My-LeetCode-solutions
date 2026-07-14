// 3925. Concatenate Array with reverse

int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2 * numsSize;
    int *ans = malloc((*returnSize) * sizeof(int));

    int j = 0;
    for (int i = 0; i < numsSize; i++)
        ans[j++] = nums[i];

    for (int i = numsSize - 1; i >= 0; i--)
        ans[j++] = nums[i];

    return ans;
}