// 268. Missing number

int missingNumber(int* nums, int numsSize) {
    long long expected = (long long) numsSize * (numsSize + 1) / 2;
    long long actual = 0;

    for (int i = 0; i < numsSize; i++){
        actual += nums[i];
    }
    return(expected - actual);
}

int missingNumber(int* nums, int numsSize) {
    int res = numsSize;

    for (int i = 0; i < numsSize; i++){
        res ^= i;
        res ^= nums[i];
    }
    return res;
}