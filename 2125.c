// 2125. Number of Laser Beams in a Bank

int numberOfBeams(char** bank, int bankSize){
    int prev = 0;
    int ans = 0;

    for (int i = 0; i < bankSize; i++){
        int curr = 0;

        for (int j = 0; bank[i][j] != '\0'; j++){
            if (bank[i][j] == '1'){
                curr++;
            }
        }

        if (curr > 0){
            ans += prev * curr;
            prev = curr;
        }
    }
    return ans;
}