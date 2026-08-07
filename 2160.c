// 2160. Minimum Sum of Four Digit Number After Splitting Digits

#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int minimumSum(int num) {
    int digits[4];

    for (int i = 0; i < 4; i++) {
        digits[i] = num % 10;
        num /= 10;
    }

    qsort(digits, 4, sizeof(int), cmp);

    int num1 = digits[0] * 10 + digits[2];
    int num2 = digits[1] * 10 + digits[3];

    return num1 + num2;
}