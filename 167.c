// 167. Two sum II - Input array is sorted

#include <stdlib.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int l = 0, r = numbersSize - 1;

    *returnSize = 2;
    int *result = (int *)malloc(2 * sizeof(int));
    while (l < r){
        int sum = numbers[l] + numbers[r];

        if (sum == target){
            result[0] = l + 1;
            result[1] = r + 1;
            return result;
        }else if (sum < target){
            l++;
        }else{
            r--;
        }
    }
    return result;
}