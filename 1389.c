// 1389. Create Target Array in the Given Order

int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize) {
    int* target = (int*)malloc(numsSize * sizeof(int));
    int size = 0;

    for (int i = 0; i < numsSize; i++){
        for (int j = size; j > index[i]; j--){
            target[j] = target[j - 1];
        }

        target[index[i]] = nums[i];
        size++;
    }

    *returnSize = numsSize;
    return target;
}