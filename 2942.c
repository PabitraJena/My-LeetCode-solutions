// 2942. Find words containing character

#include <stdlib.h>

int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* ans = (int*)malloc(wordsSize * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < wordsSize; i++) {
        int j = 0;
        while (words[i][j] != '\0') {
            if (words[i][j] == x) {
                ans[(*returnSize)++] = i;
                break;
            }
            j++;
        }
    }

    return ans;
}