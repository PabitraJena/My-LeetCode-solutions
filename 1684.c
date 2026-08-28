// 1684. Count the Number of Consistent Strings

int countConsistentStrings(char* allowed, char** words, int wordsSize){
    int present[26] = {0};
    int count = 0;

    for (int i = 0; allowed[i] != '\0'; i++){
        present[allowed[i] - 'a'] = 1;
    }

    for (int i = 0; i < wordsSize; i++){
        int valid = 1;

        for (int j = 0; words[i][j] != '\0'; j++){
            if (present[words[i][j] - 'a'] == 0) {
                valid = 0;
                break;
            }
        }

        if (valid)
            count++;
    }

    return count;
}
