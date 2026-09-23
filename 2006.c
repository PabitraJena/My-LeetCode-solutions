// 2006. Count Number of Pairs With Absolute Difference K

int countKDifference(int* nums, int numsSize, int k) {
    int freq[101] = {0};
    int pairCount = 0;
    
    for (int i = 0; i < numsSize; i++){
        int currentNum = nums[i];

        if (currentNum - k >= 1){
            pairCount += freq[currentNum - k];
        }

        if (currentNum + k <= 100){
            pairCount += freq[currentNum + k];
        }
        freq[currentNum]++;
    }
    
    return pairCount;
}