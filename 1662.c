// 1662. Check If Two String Arrays are Equivalent

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    int len1 = 0, len2 = 0;

    for (int i = 0; i < word1Size; i++)
        len1 += strlen(word1[i]);

    for (int i = 0; i < word2Size; i++)
        len2 += strlen(word2[i]);

    if (len1 != len2){
        return false;
    }

    char* str1 = malloc((len1 + 1) * sizeof(char));
    char* str2 = malloc((len2 + 1) * sizeof(char));

    int k = 0;
    for (int i = 0; i < word1Size; i++){
        for (int j = 0; word1[i][j] != '\0'; j++){
            str1[k++] = word1[i][j];
        }
    }
    str1[k] = '\0';

    k = 0;
    for (int i = 0; i < word2Size; i++) {
        for (int j = 0; word2[i][j] != '\0'; j++)
            str2[k++] = word2[i][j];
    }
    str2[k] = '\0';

    bool result = strcmp(str1, str2) == 0;

    free(str1);
    free(str2);

    return result;
}
