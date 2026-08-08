// 3289. The Two Sneaky Numbers of Digitville

int* getSneakyNumbers(int* nums, int numsSize, int* returnSize) {
    int *ans = (int*)malloc(2 * sizeof(int));
    int count[101] = {0};
    int k = 0;

    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;

        if (count[nums[i]] == 2) {
            ans[k++] = nums[i];
        }
    }

    *returnSize = 2;
    return ans;
}