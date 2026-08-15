// 3702. Longest Subsequence With Non-Zero Bitwise XOR

int longestSubsequence(int* nums, int numsSize) {
    int xor = 0;
    int allZero = 1;

    for (int i = 0; i < numsSize; i++) {
        xor ^= nums[i];

        if (nums[i] != 0)
            allZero = 0;
    }

    if (xor != 0)
        return numsSize;

    if (allZero)
        return 0;

    return numsSize - 1;
}