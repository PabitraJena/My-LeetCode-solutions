// 3867. Sum of GCD of formed pairs

#include <stdlib.h>

int gcd(int a, int b){
    while(b != 0){
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int compare(const void *a, const void *b){
    return (*(int *)a) - (*(int *)b);
}

long long gcdSum(int* nums, int numsSize) {
    int *prefixGcd = (int *)malloc(numsSize * sizeof(int));
    int max = 0;

    for (int i = 0; i < numsSize; i++){
        if (nums[i] > max){
            max = nums[i];
        }
        prefixGcd[i] = gcd(nums[i], max);
    }
    
    qsort(prefixGcd, numsSize, sizeof(int), compare);

    long long res = 0;
    for (int i = 0; i < numsSize / 2; i++){
        res += gcd(prefixGcd[i], prefixGcd[numsSize - 1 - i]);
    }
    free(prefixGcd);
    return res;
}