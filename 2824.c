// 2824. count pairs whose sum is less than target

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int countPairs(int* nums, int numsSize, int target) {
    qsort(nums, numsSize, sizeof(int), compare);

    int left = 0, right = numsSize - 1;
    int count = 0;

    while (left < right) {
        if (nums[left] + nums[right] < target) {
            // All pairs (left, left+1 ... right) are valid
            count += (right - left);
            left++;
        } else {
            right--;
        }
    }

    return count;
}