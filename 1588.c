// 1588. Sum of All Odd Length Subarrays

int sumOddLengthSubarrays(int* arr, int arrSize) {
    int sum = 0;

    for (int i = 0; i < arrSize; i++){
        int subSum = 0;

        for (int j = i; j < arrSize; j++){
            subSum += arr[j];

            if ((j - i + 1) % 2 == 1){
                sum += subSum;
            }
        }
    }

    return sum;
}