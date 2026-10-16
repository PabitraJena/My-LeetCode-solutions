// 2553. Separate the Digits in an Array

int* separateDigits(int* nums, int numsSize, int* returnSize) {
    int *ans = (int *)malloc(10000 * sizeof(int));
    int temp[10];
    int count = 0;

    for (int i = 0; i < numsSize; i++){
        int n = nums[i];
        int len = 0;

        while (n > 0){
            temp[len++] = n % 10;
            n /= 10;
        }

        for (int j = len - 1; j >= 0; j--){
            ans[count++] = temp[j];
        }
    }

    *returnSize = count;
    return ans;
}