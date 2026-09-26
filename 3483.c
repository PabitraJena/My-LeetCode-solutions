// 3483. Unique 3-Digit Even Numbers

int totalNumbers(int* digits, int digitsSize) {
    int count[10] = {0};
    int ans = 0;

    for (int i = 0; i < digitsSize; i++){
        count[digits[i]]++;
    }

    for (int a = 1; a <= 9; a++){
        if (count[a] == 0){
            continue;
        }

        for (int b = 0; b <= 9; b++){
            if (count[b] == 0){
                continue;
            }

            if (a == b && count[a] < 2){
                continue;
            }

            for (int c = 0; c <= 8; c += 2){
                if (count[c] == 0){
                    continue;
                }

                if (c == a && c == b){
                    if (count[c] < 3){
                        continue;
                    }
                } else if (c == a || c == b){
                    if (count[c] < 2){
                        continue;
                    }
                }
                ans++;
            }
        }
    }

    return ans;
}
