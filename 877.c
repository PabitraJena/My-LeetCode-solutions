// 877. Stone game

#include <stdbool.h>
#include <stdlib.h>

int max(int a, int b) {
    return a > b ? a : b;
}

bool stoneGame(int* piles, int pilesSize) {
    int n = pilesSize;

    int **dp = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        dp[i] = (int *)calloc(n, sizeof(int));
        dp[i][i] = piles[i];
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;
            dp[i][j] = max(
                piles[i] - dp[i + 1][j],
                piles[j] - dp[i][j - 1]
            );
        }
    }

    bool ans = dp[0][n - 1] > 0;

    for (int i = 0; i < n; i++){
        free(dp[i]);
    }
    free(dp);

    return ans;
}