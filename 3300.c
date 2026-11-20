// 3300. Minimum Element After Replacement With Digit Sum

int minElement(int* nums, int numsSize) {
    int sum, min = 10000;

    for (int i = 0; i < numsSize; i++){
        int num = nums[i];

        sum = 0;
        while (num > 0){
            int digit = num % 10;
            sum += digit;

            num /= 10;
        }
        
        if (sum < min){
            min = sum;
        }
    }

    return min;
}