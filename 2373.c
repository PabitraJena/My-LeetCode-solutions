// 2373. Largest Local Values in a Matrix

int** largestLocal(int** grid, int gridSize, int* gridColSize,
                   int* returnSize, int** returnColumnSizes) {
    
    int n = gridSize;
    int m = n - 2;

    int** ans = (int**)malloc(m * sizeof(int*));
    *returnColumnSizes = (int*)malloc(m * sizeof(int));

    for (int i = 0; i < m; i++){
        ans[i] = (int*)malloc(m * sizeof(int));
        (*returnColumnSizes)[i] = m;

        for (int j = 0; j < m; j++){
            int max = 0;

            for (int r = i; r < i + 3; r++){
                for (int c = j; c < j + 3; c++){
                    if (grid[r][c] > max)
                        max = grid[r][c];
                }
            }
            ans[i][j] = max;
        }
    }
    *returnSize = m;
    return ans;
}