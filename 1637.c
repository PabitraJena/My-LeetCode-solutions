// 1637. Widest Vertical Area Between Two Points Containing No Points

#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int maxWidthOfVerticalArea(int** points, int pointsSize, int* pointsColSize) {
    int *x = malloc(pointsSize * sizeof(int));

    for (int i = 0; i < pointsSize; i++) {
        x[i] = points[i][0];
    }

    qsort(x, pointsSize, sizeof(int), compare);

    int maxWidth = 0;

    for (int i = 1; i < pointsSize; i++) {
        int width = x[i] - x[i - 1];

        if (width > maxWidth) {
            maxWidth = width;
        }
    }

    free(x);

    return maxWidth;
}
