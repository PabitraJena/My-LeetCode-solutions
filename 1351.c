int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int rows = gridSize;
    int cols = gridColSize[0];

    int count = 0;
    int row = 0;
    int col = cols - 1;

    while (row < rows && col >= 0) {
        if (grid[row][col] < 0) {
            count += (rows - row);
            col--;
        } else {
            row++;
        }
    }

    return count;
}