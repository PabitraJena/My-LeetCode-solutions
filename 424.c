// 424. Longest repeating character replacement


int characterReplacement(char* s, int k) {
    int count[26] = {0};
    int maxfreq = 0;
    int res = 0;

    int l = 0;
    for (int r = 0; s[r] != '\0'; r++){
        int index = s[r] - 'A';
        count[index]++;

        if (count[index] > maxfreq){
            maxfreq = count[index];
        };

        while ((r - l + 1) - maxfreq > k){
            count[s[l] - 'A']--;
            l++;
        }
        
        int windowlen = r - l + 1;
        if (windowlen > res){
            res = windowlen;
        }
    }
    return res;
}