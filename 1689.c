// 1689. Partioning into minimum number of Deci-Binary numbers

int minPartitions(char* n) {
    int max = 0;
    while(*n){
        int digit = *n - '0';

        if (digit > max){
            max = digit;
        }

        if (max == 9){
            return 9;
        }
        n++;
    }

    return max;
}