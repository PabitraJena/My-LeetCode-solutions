#include <stdlib.h>
#include <string.h>

char* longestPalindrome(char* s) {
    int n = strlen(s);
    if (n < 2) {
        char* res = (char*)malloc(n + 1);
        strcpy(res, s);
        return res;
    }
    
    int start = 0;
    int max = 1;
    for (int i = 0; i < n; i++){
        int l = i, r = i;

        while (l >= 0 && r < n && s[l] == s[r]){
            if (r - l + 1 > max){
                max = r - l + 1;
                start = l;
            }
            l--;
            r++;
        }

        l = i;
        r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]){
            if (r - l + 1 > max){
                max = r - l + 1;
                start = l;
            }
            l--;
            r++;
        }
    }

    char* result = (char*)malloc(max + 1);
    strncpy(result, s + start, max);
    result[max] = '\0';

    return result;
}