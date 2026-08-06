// 3345. Smallest Divisible Digit Product I

int smallestNumber(int n, int t) {
    while (1){
        int x = n;
        int prod = 1;

        while (x > 0){
            prod *= (x % 10);
            x /= 10;
        }

        if (prod % t == 0){
            return n;
        }
        n++;
    }
}