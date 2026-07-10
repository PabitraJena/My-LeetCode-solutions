// 1929. Concatenation of array

#include <stdio.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = 2 * numsSize;

    int *res = (int *)malloc((*returnSize) * sizeof(int));

    for (int i = 0; i < numsSize; i++){
        res[i] = nums[i];
        res[i + numsSize] = nums[i];
    }
    return res;
}