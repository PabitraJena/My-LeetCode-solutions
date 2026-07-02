// 1431. Kids with the greatest number of candies

#include <stdlib.h>
#include <stdbool.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    *returnSize = candiesSize;

    bool *results = (bool *)malloc(candiesSize * sizeof(bool));
    int maxCandies = candies[0];

    for (int i = 1; i < candiesSize; i++){
        if (candies[i] > maxCandies){
            maxCandies = candies[i];
        }
    }

    for (int i = 0; i < candiesSize; i++){
        results[i] = (candies[i] + extraCandies >= maxCandies);
    }
    
    return results;
}