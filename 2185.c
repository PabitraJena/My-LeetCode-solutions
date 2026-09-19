// 2185. Counting Words With a Given Prefix

#include <string.h>

int prefixCount(char** words, int wordsSize, char* pref) {
    int count = 0;
    int pref_len = strlen(pref);
    
    for (int i = 0; i < wordsSize; i++){
        if (strncmp(words[i], pref, pref_len) == 0){
            count++;
        }
    }
    
    return count;
}