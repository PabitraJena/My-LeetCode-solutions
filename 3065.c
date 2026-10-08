// 3065. Minimum Operations to Exceed Threshold Value I

int minOperations(int* nums, int numsSize, int k) {
    int count = 0;

    for (int i = 0; i < numsSize; i++){
        if (nums[i] < k){
            count++;
        }
    }

    return count;
}