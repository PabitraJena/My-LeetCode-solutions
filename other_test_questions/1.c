// Longest Consecutive int from an Unsorted array 

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(const int *)a - *(const int *)b);
}

int longestConsecutive(int arr[], int n){
    if (n == 0){
        return 0;
    }

    qsort(arr, n, sizeof(int), compare);

    int longest = 1, current = 1;

    for (int i = 1; i < n; i++){
        if (arr[i] == arr[i - 1]){
            continue;
        } else if (arr[i] == arr[i - 1] + 1){
            current++;
        } else{
            if (current > longest)
                longest = current;
            current = 1;
        }
    }

    if (current > longest){
        longest = current;
    }

    return longest;
}