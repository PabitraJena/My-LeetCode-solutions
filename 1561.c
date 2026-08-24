// 1561. Maximum Number of Coins You Can Get

#include <stdlib.h>

int cmp(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}

int maxCoins(int* piles, int pilesSize){
    qsort(piles, pilesSize, sizeof(int), cmp);

    int n = pilesSize / 3;
    int res = 0;

    int i = pilesSize - 2;

    for (int k = 0; k < n; k++) {
        res += piles[i];
        i -= 2;
    }

    return res;
}