// 1769. Minimum Number of Operations to Move All Balls to Each Box

int* minOperations(char* boxes, int* returnSize){
    int n = strlen(boxes);
    int* ans = (int*)malloc(n * sizeof(int));

    *returnSize = n;
    int balls = 0;
    int operations = 0;

    for (int i = 0; i < n; i++){
        ans[i] = operations;
        if (boxes[i] == '1')
            balls++;
        operations += balls;
    }

    balls = 0;
    operations = 0;

    for (int i = n - 1; i >= 0; i--){
        ans[i] += operations;
        if (boxes[i] == '1'){
            balls++;
        }
        operations += balls;
    }

    return ans;
}
