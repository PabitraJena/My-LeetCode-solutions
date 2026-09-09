// 2657. Find the Prefix Common Array of Two Arrays

int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    int n = ASize;
    int *ans = (int *)malloc(n * sizeof(int));
    int *seen = (int *)calloc(n + 1, sizeof(int));
    int common = 0;

    *returnSize = n;

    for (int i = 0; i < n; i++){
        seen[A[i]]++;
        if (seen[A[i]] == 2){
            common++;
        }
        seen[B[i]]++;
        if (seen[B[i]] == 2){
            common++;
        }
        ans[i] = common;
    }
    free(seen);
    return ans;
}