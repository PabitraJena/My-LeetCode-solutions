// 1768. Merge Strings Alternately

char* mergeAlternately(char* word1, char* word2){
    int n1 = strlen(word1);
    int n2 = strlen(word2);

    char* result = malloc(n1 + n2 + 1);
    int i = 0, j = 0, k = 0;

    while (i < n1 || j < n2){
        if (i < n1)
            result[k++] = word1[i++];

        if (j < n2)
            result[k++] = word2[j++];
    }

    result[k] = '\0';

    return result;
}
