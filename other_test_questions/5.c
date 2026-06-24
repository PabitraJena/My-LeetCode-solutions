// Maximum no of sums of subarray with atleast K elements.

#include <stdio.h>

int maxSumAtLeastK(int arr[], int n, int k) {
    if (k > n)
        return -1;

    int maxEnd[n];

    maxEnd[0] = arr[0];
    for (int i = 1; i < n; i++) {
        if (maxEnd[i - 1] > 0)
            maxEnd[i] = maxEnd[i - 1] + arr[i];
        else
            maxEnd[i] = arr[i];
    }

    int winSum = 0;
    for (int i = 0; i < k; i++)
        winSum += arr[i];

    int result = winSum;

    for (int i = k; i < n; i++) {
        winSum += arr[i] - arr[i - k];

        if (winSum > result)
            result = winSum;

        int candidate = winSum + maxEnd[i - k];
        if (candidate > result)
            result = candidate;
    }

    return result;
}
