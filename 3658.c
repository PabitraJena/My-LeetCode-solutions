// 3658. Gcd of odd and even sums

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int gcdOfOddEvenSums(int n) {
    int oddSum = n * n;
    int evenSum = n * (n + 1);

    return gcd(oddSum, evenSum);
}