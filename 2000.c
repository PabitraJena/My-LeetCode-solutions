// 2000. Reverse prefix of word

char* reversePrefix(char* word, char ch) {
    int i = 0;

    while (word[i] != '\0' && word[i] != ch){
        i++;
    }

    if (word[i] == '\0'){
        return word;
    }

    int l = 0; int r = i;
    while (l < r){
        char temp = word[l];
        word[l] = word[r];
        word[r] = temp;
        l++;
        r--;
    }
    
    return word;
}