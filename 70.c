// 70. Climbing stairs

#include <stdlib.h>

int climbStairs(int n) {
    if (n <= 2){
        return n;
    }
    
    int first = 1, second = 2;
    for (int i = 3; i < n; i++){
        int current = first + second;
        first = second;
        second = current;
    }
    return second;
}

int climbStairsDP(int n) {
    if (n <= 2){
        return n;
    }
    
    int *dp = (int *)malloc((n + 1) * sizeof(int));

    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    
    int ans = dp[n];
    free(dp);

    return ans;
}