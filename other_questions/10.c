/*
Input: 49623
Output: 
    49623
    4623
    423
    23
    2

Input: 7531
Output:
    7531
    531
    31
    1
*/

#include <stdio.h>

int main(int argc, char const *argv[]){
    int n = 49623;
    while(n > 0){
        printf("%d\n", n);

        int temp = n;
        int maxdigit = -1;
        int maxplace = 1;
        int currentplace = 1;

        while(temp > 0){
            int digit = temp % 10;
            if (digit > maxdigit){
                maxdigit = digit;
                maxplace = currentplace;
            }
            temp /= 10;
            currentplace *= 10;
        }
        int leftpart = n / (maxplace * 10);
        int rightpart = n % maxplace;
        
        n = (leftpart * maxplace) + rightpart;
    }
    return 0;
}
