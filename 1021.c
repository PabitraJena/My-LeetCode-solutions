// 1021. remove outermost parenthesis

#include <stdlib.h>
#include <string.h>

char* removeOuterParentheses(char* s){
    int n = strlen(s);
    char* ans = (char*)malloc((n + 1) * sizeof(char));
    int depth = 0, j = 0;

    for (int i = 0; i < n; i++){
        if (s[i] == '(') {
            if (depth > 0)
                ans[j++] = '(';
            depth++;
        }else{
            depth--;
            if (depth > 0)
                ans[j++] = ')';
        }
    }

    ans[j] = '\0';
    return ans;
}