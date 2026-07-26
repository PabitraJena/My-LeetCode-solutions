// 3194. Minimum average of smallest and largest numbers

#include <stdlib.h>

int cmp(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

double minimumAverage(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);

    double res = 999;

    int left = 0;
    int right = numsSize - 1;

    while (left < right){
        double avg = (nums[left] + nums[right]) / 2.0;
        if (avg < res){
            res = avg;
        }
        left++;
        right--;
    }
    return res;
}