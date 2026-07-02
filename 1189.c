// 1189. Maximum number of balloons

int maxNumberOfBalloons(char* text) {
    int freq[26] = {0};

    while(*text){
        freq[*text - 'a']++;
        text++;
    }

    int b = freq['b' - 'a'];
    int a = freq['a' - 'a'];
    int l = freq['l' - 'a'] / 2;
    int o = freq['o' - 'a'] / 2;
    int n = freq['n' - 'a'];

    int res = b;

    if (a < res)
        res = a;
    if (l < res)
        res = l;
    if (o < res)
        res = o;
    if (n < res)
        res = n;

    return res;
}