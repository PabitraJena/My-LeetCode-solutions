// 1291. Sequential Digits

int* sequentialDigits(int low, int high, int* returnSize) {
    int *ans = (int *)malloc(40 * sizeof(int));
    *returnSize = 0;

    char *s = "123456789";

    for (int len = 2; len <= 9; len++) {
        for (int start = 0; start + len <= 9; start++) {
            int num = 0;

            for (int i = start; i < start + len; i++) {
                num = num * 10 + (s[i] - '0');
            }

            if (num >= low && num <= high) {
                ans[(*returnSize)++] = num;
            }
        }
    }

    return ans;
}