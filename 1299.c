// 1299. Replace Elements with Greatest Element on Right Side

#include <stdio.h>
#include <stdlib.h>

int* replaceElements(int* arr, int arrSize, int* returnSize) {
    *returnSize = arrSize;
    if (arrSize == 0) return NULL;

    int* result = (int*)malloc(arrSize * sizeof(int));
    if (result == NULL){
        return NULL;
    }

    int max = -1;

    for (int i = arrSize - 1; i >= 0; i--){
        result[i] = max;
        if (arr[i] > max){
            max = arr[i];
        }
    }

    return result;
}