// 3517. Smallest palindromic rearrangement I

#include <stdlib.h>
#include <string.h>

char* smallestPalindrome(char* s) {
    int n = strlen(s);
    int count[26] = {0};
    for (int i = 0; i < n; i++){
        count[s[i] - 'a']++;
    }

    char *ans = (char *)malloc((n + 1) * sizeof(char));
    int left = 0;
    int right = n - 1;
    for (int i = 0; i < 26; i++){
        while (count[i] >= 2){
            ans[left++] = 'a' + i;
            ans[right--] = 'a' + i;
            count[i] -= 2;
        }
    }

    for (int i = 0; i < 26; i++){
        if (count[i] == 1){
            ans[left] = 'a' + i;
            break;
        }
    }
    
    ans[n] = '\0';
    return ans;
}