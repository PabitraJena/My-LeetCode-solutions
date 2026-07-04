// Calculate the sum and average of n natural numbers, make sure to keep the codes modular

#include <stdio.h>

int calculateSum(int n){
    return n*(n + 1) / 2;
}

float calculateAverage(int sum, int n){
    return (float)(sum / n);
}

int main(int argc, char const *argv[]){
    int n;
    scanf("%d", &n);
    printf("Sum: %d", calculateSum(n));
    printf("Sum: %.2f", calculateSum(n), n);
    return 0;
}
