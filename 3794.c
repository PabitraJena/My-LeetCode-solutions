// 3794. Reverse String Prefix

char* reversePrefix(char* s, int k) {
    int l = 0, r = k - 1;

    while(l < r){
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }
    return s;
}