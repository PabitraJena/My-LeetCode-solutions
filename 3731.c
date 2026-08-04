// 3731. Find the missing elements

#include <stdlib.h>
#include <stdbool.h>

int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    int max = INT_MIN;
    int min = INT_MAX;

    bool seen[101] = {false};

    for (int i = 0; i < numsSize; i++){
        if (nums[i] < min){
            min = nums[i];
        }
        if (nums[i] > max){
            max = nums[i];
        }
        seen[nums[i]] = true;
    }
    
    int *ans = (int *)malloc((max - min) * sizeof(int));
    *returnSize = 0;

    for (int i = min + 1; i < max; i++){
        if (!seen[i]){
            ans[(*returnSize)++] = i;
        }
    }
    return ans;
}