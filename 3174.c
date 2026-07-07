// 3174. Clear digits

#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* clearDigits(char* s) {
    int n = strlen(s);
    char *ans = (char *)malloc(n + 1);
    int top = 0;

    for (int i = 0; i < n; i++) {
        if (isdigit(s[i])) {
            if (top > 0)
                top--;
        } else {
            ans[top++] = s[i];
        }
    }

    ans[top] = '\0';
    return ans;
}