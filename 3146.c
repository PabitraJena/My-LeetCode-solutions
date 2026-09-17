// 3146. Permutation Difference between Two Strings

#include <stdlib.h>
#include <string.h>

int findPermutationDifference(char* s, char* t) {
    int pos[26] = {0};
    int n = strlen(s);
    int diff = 0;

    for (int i = 0; i < n; i++){
        pos[s[i] - 'a'] = i;
    }

    for (int i = 0; i < n; i++){
        diff += abs(i - pos[t[i] - 'a']);
    }

    return diff;
}