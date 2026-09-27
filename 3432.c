// 3432. Count Partitions with Even Sum Difference

int countPartitions(int* nums, int numsSize) {
    int totalSum = 0;

    for (int i = 0; i < numsSize; i++){
        totalSum += nums[i];
    }

    if (totalSum % 2 != 0){
        return 0;
    }

    return numsSize - 1;
}