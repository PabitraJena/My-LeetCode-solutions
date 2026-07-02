/*
Input: 469718
Output:
    23267
    1141
    033
    30
    3
*/

#include <stdio.h>
#include <string.h>

int main() {
    char num[] = "469718";

    for (int len = strlen(num) - 1; len > 0; len--) {
        for (int i = 0; i < len; i++)
            num[i] = '0' + abs((num[i] - '0') - (num[i + 1] - '0'));
        num[len] = '\0';
        printf("%s\n", num);
    }

    return 0;
}