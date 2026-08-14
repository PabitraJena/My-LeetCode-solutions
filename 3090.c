// 3090. Maximum Length Substring With Two Occurrences

#include <string.h>

int maximumLengthSubstring(char* s) {
    int freq[26] = {0};
    int left = 0, ans = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        freq[s[right] - 'a']++;

        while (freq[s[right] - 'a'] > 2) {
            freq[s[left] - 'a']--;
            left++;
        }

        int len = right - left + 1;
        if (len > ans)
            ans = len;
    }

    return ans;
}