// 3736. Minimum Moves to Equal Array Elements III

int minMoves(int* nums, int numsSize) {
    int maxVal = nums[0];
    int ans = 0;

    for (int i = 1; i < numsSize; i++){
        if (nums[i] > maxVal){
            maxVal = nums[i];
        }
    }

    for (int i = 0; i < numsSize; i++){
        ans += maxVal - nums[i];
    }

    return ans;
}
