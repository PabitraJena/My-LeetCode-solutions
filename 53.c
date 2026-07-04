// 53. Maximum Subarray

int maxSubArray(int* nums, int numsSize) {

    if (numsSize == 0){
        return 0;
    }
    
    int maxSum = nums[0];
    int curSum = 0;

    for (int i = 0; i < numsSize; i++){
        if (curSum < 0){
            curSum = 0;
        }
        curSum += nums[i];

        if (maxSum < curSum){
            maxSum = curSum;
        }
    }
    return maxSum;
}