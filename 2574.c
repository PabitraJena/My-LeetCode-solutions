// 2574. Left and Right Sum Differences

int* leftRightDifference(int* nums, int numsSize, int* returnSize){
    int total = 0;

    for (int i = 0; i < numsSize; i++){
        total += nums[i];
    }

    int* ans = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    int l = 0;

    for (int i = 0; i < numsSize; i++){
        int r = total - l - nums[i];
        ans[i] = abs(l - r);
        l += nums[i];
    }

    return ans;
}