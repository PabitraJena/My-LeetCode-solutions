// 3427. Sum of Variable Length Subarrays

int subarraySum(int* nums, int numsSize) {
    int total = 0;

    for (int i = 0; i < numsSize; i++){
        int start = i - nums[i];

        if (start < 0){
            start = 0;
        }

        for (int j = start; j <= i; j++){
            total += nums[j];
        }
    }

    return total;
}