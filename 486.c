#include <stdbool.h>

int max(int a, int b){
    return (a > b) ? a : b;
}

bool predictTheWinner(int* nums, int numsSize) {
    int dp[20][20] = {0};

    for (int i = 0; i < numsSize; i++)
        dp[i][i] = nums[i];

    for (int len = 2; len <= numsSize; len++) {
        for (int i = 0; i + len - 1 < numsSize; i++) {
            int j = i + len - 1;

            dp[i][j] = max(nums[i] - dp[i + 1][j], nums[j] - dp[i][j - 1]);
        }
    }

    return dp[0][numsSize - 1] >= 0;
}