// 3760. Maximum substrings with distinct start

int maxDistinct(char* s) {
    int seen[26] = {0};
    int count = 0;

    while (*s) {
        int idx = *s - 'a';
        if (!seen[idx]) {
            seen[idx] = 1;
            count++;
        }
        s++;
    }

    return count;
}