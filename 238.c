// 238. Product of array except self

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    int *output = (int *)malloc(sizeof(int) * numsSize);
    
    int prefix = 1;
    for (int i = 0; i < numsSize; i++){
        output[i] = prefix;
        prefix *= nums[i];
    }

    int postfix = 1;
    for (int i = numsSize - 1; i >= 0 ; i--){
        output[i] *= postfix;
        postfix *= nums[i];
    }

    return output;
}