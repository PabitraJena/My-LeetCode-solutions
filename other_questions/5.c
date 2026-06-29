/*
Input: "C30G41U i0s G37re69at511"
Output: 511
*/

int func(char *s){
    int max = 0;
    int num = 0;

    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] >= '0' && s[i] <= '9'){
            num = num * 10 + (s[i] - '0');
        }else{
            if (num > max){
                max = num;
            }
            num = 0;
        }
    }

    if (num > max){
        max = num;
    }

    return max;
}