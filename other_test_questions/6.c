// largest substring without repeating characters

#include <stdio.h>
#include <string.h>

int LengthOfLongestSubstring(char *s){
    int hash[256];
    for (int i = 0; i < 256; i++){
        hash[i] = -1;
    }

    int maxlen = 0;
    int start = 0;
    
    for (int i = 0; s[i] != '\0'; i++){
        unsigned char c = s[i];
        if (hash[c] >= start){
            start = hash[c] + 1;
        }
        
        hash[c] = i;

        int currlen = i - start + 1;
        if (currlen > maxlen){
            maxlen = currlen;
        }
    }
    return maxlen;
}