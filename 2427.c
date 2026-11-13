int commonFactors(int a, int b) {
    int count = 0, n = (a > b ? b : a);

    for (int i = 1; i <= n; i++){
        if (a % i == 0 && b % i == 0){
            count++;
        }
    }

    return count;
}