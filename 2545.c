// 2545. Sort the Students by Their Kth Score

int** sortTheStudents(int** score, int scoreSize, int* scoreColSize,
                      int k, int* returnSize, int** returnColumnSizes) {

    *returnSize = scoreSize;

    *returnColumnSizes = malloc(scoreSize * sizeof(int));

    for (int i = 0; i < scoreSize; i++) {
        (*returnColumnSizes)[i] = *scoreColSize;
    }

    for (int i = 1; i < scoreSize; i++) {
        int *current = score[i];
        int j = i - 1;

        while (j >= 0 && score[j][k] < current[k]) {
            score[j + 1] = score[j];
            j--;
        }

        score[j + 1] = current;
    }

    return score;
}