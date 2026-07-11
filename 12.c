// Integer to roman

char* intToRoman(int num) {
    static char ans[20] = "";

    int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    int k = 0;

    for (int i = 0; i < 13; i++) {
        while (num >= value[i]) {
            int j = 0;
            while (roman[i][j] != '\0') {
                ans[k++] = roman[i][j];
                j++;
            }
            num -= value[i];
        }
    }

    ans[k] = '\0';
    return ans;
}