// 1963. Minimum Number of Swaps to Make the String Balanced

int minSwaps(char* s) {
    int balance = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '[') {
            balance++;
        } else {
            if (balance > 0)
                balance--;
        }
    }

    return (balance + 1) / 2;
}