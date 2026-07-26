// 2161. Partition array according to given pivot

#include <stdlib.h>

int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    *returnSize = numsSize;

    int *res = (int *) malloc(sizeof(int) * numsSize);

    for (int i = 0; i < numsSize; i++){
        res[i] = pivot;
    }

    int left = 0;
    int right = numsSize - 1;

    int i = 0;
    int j = numsSize - 1;

    while (i < numsSize){
        if (nums[i] < pivot){
            res[left++] = nums[i]; 
        }
        if (nums[j] > pivot){
            res[right--] = nums[j];
        }
        i++;
        j--;
    }
    return res;
}