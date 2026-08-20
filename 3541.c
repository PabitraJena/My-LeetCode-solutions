// 3541. Find Most Frequent Vowel and Consonant

int maxFreq(int freq[], int size) {
    int max = 0;

    for (int i = 0; i < size; i++) {
        if (freq[i] > max) {
            max = freq[i];
        }
    }

    return max;
}

int maxFreqSum(char* s) {
    int vowels[5] = {0};
    int consonants[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u') {

            if (c == 'a') vowels[0]++;
            else if (c == 'e') vowels[1]++;
            else if (c == 'i') vowels[2]++;
            else if (c == 'o') vowels[3]++;
            else vowels[4]++;

        } else {
            consonants[c - 'a']++;
        }
    }

    return maxFreq(vowels, 5) + maxFreq(consonants, 26);
}
