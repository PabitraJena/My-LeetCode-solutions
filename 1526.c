// 1526. Minimum Number of Increments on Subarrays to Form a Target Array

int minNumberOperations(int* target, int targetSize) {
    int res = target[0];

    for (int i = 1; i < targetSize; i++){
        if (target[i] > target[i - 1]){
            res += (target[i] - target[i - 1]);
        }        
    }
    return res;
}