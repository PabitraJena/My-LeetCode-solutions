// 3895. Count Digit Appearances

int countDigitOccurrences(int* nums, int numsSize, int digit) {
    int count = 0;

    for (int i = 0; i < numsSize; i++){
        int num = nums[i];

        while (num > 0){
            if (num % 10 == digit){
                count++;
            }
            num /= 10;
        }
    }
    return count;
}