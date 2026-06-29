/*
Input : 769.51
Output : 76951

Input : 769.5145
Output : 7695145
*/

#include <stdio.h>
#include <string.h>

void func(double x){
    char buffer[64];
    snprintf(buffer, sizeof(buffer), "%g", x);

    int len = strlen(buffer);
    int write = 0;

    for (int i = 0; i < len; i++){
        if (buffer[i] != '.'){
            buffer[write++] = buffer[i];
        }
    }
    buffer[write] = '\0';
    printf("%s\n", buffer);
}