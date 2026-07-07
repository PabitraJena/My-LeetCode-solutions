// 1614. Maximum nesting depth of the parenthesis

int maxDepth(char* s) {
    int max_depth = 0;
    int depth = 0;

    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == '('){
            depth++;
            if (depth > max_depth){
                max_depth = depth;
            }
        }
        if (s[i] == ')'){
            depth--;
        }
    }
    return max_depth;
}