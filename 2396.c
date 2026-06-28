// 2396. Strictly Palindromic Number

/*
I don't know why the solution is just "return false" but I did it full anyway, 

Note: the while loop inside the main function is not written by me I asked chatgpt for the snippet I am not capable enough of that...
*/

#include <stdbool.h>

bool isPlaindrome(int arr[], int len){
    int l = 0, r = len - 1;

    while (l < r){
        if (arr[l] != arr[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

bool isStrictlyPalindromic(int n) {
    int digits[32];

    for (int i = 2; i < n - 2; i++){
        int temp = n;
        int len = 0;

        while (temp > 0){
            digits[len] = temp % i;
            len++;
            temp /= i;
        }
        
        if (!isPlaindrome(digits, len)){
            return false;
        }
    }
    return true;
}