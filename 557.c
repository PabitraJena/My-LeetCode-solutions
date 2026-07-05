// 557. Reverse words in string III

void reverse(char *s, int l, int r) {
    while (l < r) {
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }
}

char* reverseWords(char* s) {
    int i = 0;
    int start = 0;

    while (s[i] != '\0') {
        if (s[i] == ' ') {
            reverse(s, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    reverse(s, start, i - 1);
    return s;
}