// 1365. How many numbers are less than current number

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int count[101] = {0};

    for (int i = 0; i < numsSize; i++){
        count[nums[i]]++;
    }
    
    for (int i = 1; i <= 100; i++){
        count[i] += count[i - 1];
    }

    int* res = (int*)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++){
        if (nums[i] == 0){
            res[i] = 0;
        }else{
            res[i] = count[nums[i] - 1];
        }
    }
    *returnSize = numsSize;
    return res;
    
}