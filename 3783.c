// 3783. Mirror distance of an integer

#include <stdlib.h>

int mirrorDistance(int n) {
    int rev = 0, x = n;

    while (x > 0) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }

    return abs(n - rev);
}