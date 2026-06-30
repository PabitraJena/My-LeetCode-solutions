/*
Input1: 1000;
Input2: 9999;

Output: 1001, 1111, 1221, 1331, 1441, ... 9009, 9119, ... 9889, 9999
*/
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x){
    int rev = 0;
    int og = x;

    while (x){
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    return rev == og;
}

int main() {
    int input1 = 1000, input2 = 9999;

    // for (int a = 1; a <= 9; a++) {
    //     for (int b = 0; b <= 9; b++) {
    //         int num = a * 1000 + b * 100 + b * 10 + a;

    //         if (num >= input1 && num <= input2)
    //             printf("%d ", num);
    //     }
    // }

    for (int i = input1; i <= input2; i++){
        if (isPalindrome(i)){
            printf("%d ", i);
        }
    }
    return 0;
}