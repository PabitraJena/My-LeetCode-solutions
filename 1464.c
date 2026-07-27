// 1464. Maximum product of two elements in an array

int maxProduct(int* nums, int numsSize) {
    int first = 0, second = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > first) {
            second = first;
            first = nums[i];
        } else if (nums[i] > second) {
            second = nums[i];
        }
    }

    return (first - 1) * (second - 1);
}