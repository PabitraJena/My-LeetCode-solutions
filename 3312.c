// 3312. Sorted GCD pair queries

#include <stdlib.h>

int* gcdValues(int* nums, int numsSize, long long* queries, int queriesSize, int* returnSize) {
    int max = 0;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] > max){ 
            max = nums[i];
        }
    }

    int *freq = calloc(max + 1, sizeof(int));
    int *cnt = calloc(max + 1, sizeof(int));
    long long *exact = calloc(max + 1, sizeof(long long));
    long long *pref = calloc(max + 1, sizeof(long long));

    for (int i = 0; i < numsSize; i++){
        freq[nums[i]]++;
    }

    for (int d = 1; d <= max; d++){
        for (int j = d; j <= max; j += d){
            cnt[d] += freq[j];
        }
    }

    for (int d = max; d >= 1; d--) {
        long long x = cnt[d];
        exact[d] = x * (x - 1) / 2;
        for (int j = d + d; j <= max; j += d){
            exact[d] -= exact[j];
        }
    }

    for (int i = 1; i <= max; i++){
        pref[i] = pref[i - 1] + exact[i];
    }

    int *ans = malloc(sizeof(int) * queriesSize);

    for (int i = 0; i < queriesSize; i++) {
        int l = 1, r = max;
        while (l < r) {
            int mid = (l + r) / 2;
            if (pref[mid] > queries[i]){
                r = mid;
            }
            else{
                l = mid + 1;
            }
        }
        ans[i] = l;
    }

    free(freq);
    free(cnt);
    free(exact);
    free(pref);

    *returnSize = queriesSize;
    return ans;
}