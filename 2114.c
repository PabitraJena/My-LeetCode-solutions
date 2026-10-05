// 2114. Maximum Number of Words Found in Sentences

int mostWordsFound(char **sentences, int sentencesSize) {
    int maxWords = 0;

    for (int i = 0; i < sentencesSize; i++){
        int words = 1;

        for (int j = 0; sentences[i][j] != '\0'; j++){
            if (sentences[i][j] == ' ') {
                words++;
            }
        }

        if (words > maxWords){
            maxWords = words;
        }
    }

    return maxWords;
}