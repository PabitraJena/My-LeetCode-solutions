// 1732. Find the Highest Altitude

int largestAltitude(int* gain, int gainSize) {
    int h = 0;
    int max = 0;

    for (int i = 0; i < gainSize; i++){
        h += gain[i];

        if (h > max){
            max = h;
        }
    }

    return max;
}