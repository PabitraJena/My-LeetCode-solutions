// 3532. Path existence queries in a graph I

#include <stdbool.h>
#include <stdlib.h>

bool* pathExistenceQueries(int n, int* nums, int numsSize, int maxDiff, int** queries, int queriesSize, int* queriesColSize, int* returnSize) {

    int *comp = (int *)malloc(sizeof(int) * n);
    comp[0] = 0;

    int id = 0;
    for (int i = 1; i < n; i++){
        if (nums[i] - nums[i - 1] > maxDiff){
            id++;
        }
        comp[i] = id;
    }

    bool *ans = (bool *)malloc(sizeof(bool) * queriesSize);

    for(int i = 0; i < queriesSize; i++){
        int u = queries[i][0];
        int v = queries[i][1];
        ans[i] = (comp[u] == comp[v]);
    }
    *returnSize = queriesSize;
    free(comp);
    return ans;
}