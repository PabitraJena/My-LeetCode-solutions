// Maximum product of 3 numbers

#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int maximumProduct(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);

    int n = numsSize;

    int p1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
    int p2 = nums[0] * nums[1] * nums[n - 1];

    return (p1 > p2) ? p1 : p2;
}