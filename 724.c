// 724. Find Pivot Element

int pivotIndex(int* nums, int numsSize) {
    int total_sum = 0;
    for (int i = 0; i < numsSize; i++){
        total_sum += nums[i];
    }

    int right_sum = total_sum;
    int left_sum = 0;

    for (int i = 0; i < numsSize; i++){
        right_sum -= nums[i];
        if (left_sum == right_sum){
            return i;
        }
        left_sum += nums[i];
    }
    return -1;
}