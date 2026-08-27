// 3191. Minimum Operations to Make Binary Array Elements Equal to One I

int minOperations(int* nums, int numsSize){
    int operations = 0;

    for (int i = 0; i <= numsSize - 3; i++){
        if (nums[i] == 0){
            nums[i] ^= 1;
            nums[i + 1] ^= 1;
            nums[i + 2] ^= 1;

            operations++;
        }
    }

    if (nums[numsSize - 2] == 1 && nums[numsSize - 1] == 1)
        return operations;

    return -1;
}
