// 28. Find the index of the first occurence in a string

int strStr(char *haystack, char *needle) {
    if (*needle == '\0')
        return 0;

    int i, j;

    for (i = 0; haystack[i] != '\0'; i++) {
        j = 0;

        while (needle[j] != '\0' && haystack[i + j] != '\0' && haystack[i + j] == needle[j]) {
            j++;
        }

        if (needle[j] == '\0')
            return i;
    }

    return -1;
}