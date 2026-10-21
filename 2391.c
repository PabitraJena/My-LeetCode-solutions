// 2391. Minimum Amount of Time to Collect Garbage

#include <string.h>

int garbageCollection(char** garbage, int garbageSize, int* travel, int travelSize) {
    int totalTime = 0;
    int lastM = 0, lastP = 0, lastG = 0;

    int prefix[garbageSize];
    prefix[0] = 0;

    for (int i = 1; i < garbageSize; i++){
        prefix[i] = prefix[i - 1] + travel[i - 1];
    }

    for (int i = 0; i < garbageSize; i++){
        int len = strlen(garbage[i]);
        totalTime += len;

        for (int j = 0; j < len; j++){
            if (garbage[i][j] == 'M'){
                lastM = i;
            }
            else if (garbage[i][j] == 'P'){
                lastP = i;
            }
            else if (garbage[i][j] == 'G'){
                lastG = i;
            }
        }
    }

    totalTime += prefix[lastM];
    totalTime += prefix[lastP];
    totalTime += prefix[lastG];

    return totalTime;
}