// Find the first non repeating character from a string

#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++){
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++){
        if (freq[(unsigned char)str[i]] == 1){
            printf("%c\n", str[i]);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}