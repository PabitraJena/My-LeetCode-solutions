// 3. Longest Substring Without Repeating Characters

#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s){
    int hash[256];
    for (int i = 0; i < 256; i++){
        hash[i] = -1;
    }

    int maxLen = 0;
    int start = 0;

    for (int i = 0; s[i] != '\0'; i++){
        unsigned char c = s[i];
        if (hash[c] >= start){
            start = hash[c] + 1;
        }
        
        hash[c] = i;

        int currLen = i - start + 1;
        if (currLen > maxLen){
            maxLen = currLen;
        }
    }
    return maxLen;
}