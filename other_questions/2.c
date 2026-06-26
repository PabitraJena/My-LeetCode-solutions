// Input: [0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0]
// Output: [0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1]

void sortBinaryCount(int arr[], int n){
    int zeroCount = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] == 0)
            zeroCount++;
    }

    for (int i = 0; i < zeroCount; i++){
        arr[i] = 0;
    }

    for (int i = zeroCount; i < n; i++){
        arr[i] = 1;
    }
}

void sortBinary(int arr[], int n){
    int left = 0;
    int right = n - 1;

    while (left < right){

        if (arr[left] == 0){
            left++;
        }
        else if (arr[right] == 1){
            right--;
        }
        else{
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }
}