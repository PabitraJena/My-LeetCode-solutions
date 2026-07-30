// 3898. Find the degree of each vertex

int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    *returnSize = matrixSize;
    int* ans = (int*)malloc(matrixSize * sizeof(int));

    for (int i = 0; i < matrixSize; i++) {
        ans[i] = 0;
        for (int j = 0; j < matrixColSize[i]; j++) {
            ans[i] += matrix[i][j];
        }
    }

    return ans;
}