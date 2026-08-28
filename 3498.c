// 3498. Reverse Degree of a String

int reverseDegree(char* s){
    int sum = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int pos = i + 1;
        int rev = 26 - (s[i] - 'a');
        sum += pos * rev;
    }

    return sum;
}
