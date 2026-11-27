// Recursive string collapse
#include <stdio.h>
#include <string.h>

void collapse(char str[]){
    int i = 0, j = 0;
    int len = strlen(str);

    if (len == 0){
        return;
    }

    while (i < len){
        if (str[i] == str[i + 1]){
            char ch = str[i];

            while (str[i] == ch){
                i++;
            }
        } else {
            str[j++] = str[i++];
        }
    }

    str[j] = '\0';

    if (j < len){
        collapse(str);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    collapse(str);

    printf("Collapsed string: %s\n", str);

    return 0;
}