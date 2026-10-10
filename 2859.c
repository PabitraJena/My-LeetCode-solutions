// 2859. Sum of Values at Indices With K Set Bits

int sumIndicesWithKSetBits(int* nums, int numsSize, int k) {
    int sum = 0;

    for (int i = 0; i < numsSize; i++){
        int count = 0;
        int n = i;

        while (n > 0){
            count += n & 1;
            n >>= 1;
        }

        if (count == k){
            sum += nums[i];
        }
    }

    return sum;
}