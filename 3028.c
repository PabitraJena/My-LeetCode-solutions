// 3028. Ant on the Boundary

int returnToBoundaryCount(int* nums, int numsSize) {
    int pos = 0;
    int count = 0;

    for (int i = 0; i < numsSize; i++){
        pos += nums[i];

        if (pos == 0){
            count++;
        }
    }

    return count;
}