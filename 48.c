// 48. Rotate Image

void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    for (int x = 0; x < matrixSize; x++){
        for (int y = x + 1; y < matrixSize; y++){
            int temp = matrix[x][y];
            matrix[x][y] = matrix[y][x];
            matrix[y][x] = temp;
        }
    }

    for (int i = 0; i < matrixSize; i++){
        int l = 0, r = matrixSize - 1;

        while (l < r){
            int temp = matrix[i][l];
            matrix[i][l] = matrix[i][r];
            matrix[i][r] = temp;
            l++;
            r--;
        }
    }
}