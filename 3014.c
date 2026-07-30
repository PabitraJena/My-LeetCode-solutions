// 3014. Minimum number of pushes to type word I

int minimumPushes(char* word) {
    int ans = 0;
    
    for (int i = 0; word[i] != '\0'; i++) {
        ans += (i / 8) + 1;
    }
    
    return ans;
}