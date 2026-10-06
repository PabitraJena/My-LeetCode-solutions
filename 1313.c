// 1313. Decompress Run-Length Encoded List

int* decompressRLElist(int* nums, int numsSize, int* returnSize) {
    int total = 0;

    for (int i = 0; i < numsSize; i += 2){
        total += nums[i];
    }

    int* result = (int*)malloc(total * sizeof(int));
    int index = 0;

    for (int i = 0; i < numsSize; i += 2){
        int freq = nums[i];
        int value = nums[i + 1];

        for (int j = 0; j < freq; j++){
            result[index++] = value;
        }
    }

    *returnSize = total;
    return result;
}