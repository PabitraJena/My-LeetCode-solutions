// 2243. Calculate Digit Sum of a String

char* digitSum(char* s, int k) {
    int len = strlen(s);

    while (len > k){
        char temp[1001];
        int newLen = 0;

        for (int i = 0; i < len; i += k){
            int sum = 0;

            for (int j = i; j < i + k && j < len; j++){
                sum += s[j] - '0';
            }

            char buffer[10];
            int count = sprintf(buffer, "%d", sum);

            for (int j = 0; j < count; j++){
                temp[newLen++] = buffer[j];
            }
        }

        temp[newLen] = '\0';

        strcpy(s, temp);
        len = newLen;
    }

    return s;
}
