// product of array except self

#include <stdio.h>

void func(int arr[], int n){

    int arr2[n];

    arr2[0] = 1;
    for (int i = 1; i < n; i++){
        arr2[i] = arr2[i - 1] * arr[i - 1];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--){
        arr2[i] *= suffix;
        suffix *= arr[i];
    }
    
    for (int i = 0; i < n; i++){
        printf("%d ", arr2[i]);
    }
}