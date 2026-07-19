// 3992. Rearrange string to avoid character pair

#include <stdio.h>
#include <string.h>

char* rearrangeString(char* s, char x, char y){
    static char t[105];
    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++){
        count[s[i] - 'a']++;
    }

    int idx = 0;

    while (count[y - 'a'] > 0){
        t[idx++] = y;
        count[y - 'a']--;
    }

    for (int i = 0; i < 26; i++){
        char c = 'a' + i;
        if (c != x && c != y) {
            while (count[i] > 0) {
                t[idx++] = c;
                count[i]--;
            }
        }
    }

    while (count[x - 'a'] > 0){
        t[idx++] = x;
        count[x - 'a']--;
    }

    t[idx] = '\0';
    return t;
}