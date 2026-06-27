// 344. Reverse a string

void reverseString(char* s, int sSize) {
    int left = 0, right = sSize - 1; // right is sSize - 1 because the last index contains null terminator '\0'

    while (left < right){
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}