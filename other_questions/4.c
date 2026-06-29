/*
Input: "C3G4U i0s G3re6at5"
Output: 6

Input: "C0GU i0s Gre0at"
Output: 0
*/

void func(char *s){
    char c = '0';
    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] >= '0' && s[i] <= '9'){
            if (s[i] > c){
                c = s[i];
            }
        }
    }
    printf("%c\n", c);
}