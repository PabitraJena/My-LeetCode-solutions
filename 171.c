// 171. Excel Sheet Column Number

int titleToNumber(char* columnTitle) {
    
    int res = 0;
    for (int i = 0; columnTitle[i] != '\0'; i++){
        res = res * 26 + (columnTitle[i] - 'A' + 1); // formula i didn't know;
    }
    return res;
}