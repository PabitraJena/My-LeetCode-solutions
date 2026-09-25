// 1652. Defuse the Bomb

int* decrypt(int* code, int codeSize, int k, int* returnSize) {
    int* ans = (int*)malloc(codeSize * sizeof(int));
    *returnSize = codeSize;

    for (int i = 0; i < codeSize; i++){
        ans[i] = 0;

        if (k > 0){
            for (int j = 1; j <= k; j++){
                ans[i] += code[(i + j) % codeSize];
            }
        } 
        else if (k < 0){
            for (int j = 1; j <= -k; j++){
                ans[i] += code[(i - j + codeSize) % codeSize];
            }
        }
    }

    return ans;
}