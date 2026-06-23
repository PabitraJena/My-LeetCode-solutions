// Equillibrium index of an array

#include <stdio.h>

void func(int arr[], int n){

    int l = 0, r = 0;
    for (int i = 0; i < n; i++){
        r += arr[i];
    }
    
    int exists = 0;
    for (int i = 0; i < n; i++){
        r -= arr[i];

        if (l == r){
            printf("%d", i);
            exists++;
        }
        l += arr[i];
    }
    if (exists == 0){
        printf("-1");
    }
    
}