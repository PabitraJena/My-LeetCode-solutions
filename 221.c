// 221. Maximal square

int Min(int a, int b){
    return a > b ? b : a;
}

int maximalSquare(char** matrix, int matrixSize, int* matrixColSize) {
    if (matrixSize == 0){
        return 0;
    }
    
    int rows = matrixSize;
    int cols = matrixColSize[0];

    int dp[rows][cols];
    int max = 0;

    for (int r = 0; r < rows; r++){
        for (int c = 0; c < cols; c++){
            if (matrix[r][c] == '1'){
                if (r == 0 || c == 0){
                    dp[r][c] = 1;
                }else{
                    dp[r][c] = 1 + (Min(dp[r - 1][c], Min(dp[r][c - 1], dp[r - 1][c - 1])));
                }

                if (dp[r][c] > max){
                    max = dp[r][c];
                }
                
            }else{
                dp[r][c] = 0;
            }
        }
    }

    return max * max;
}