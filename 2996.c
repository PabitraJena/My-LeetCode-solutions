// 2996. Smallest Missing Integer Greater Than Sequential Prefix Sum

#include <stdbool.h>

int missingInteger(int* nums, int numsSize) {
    int sum = nums[0];

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1] + 1)
            sum += nums[i];
        else
            break;
    }

    int ans = sum;

    while (true) {
        bool found = false;

        for (int i = 0; i < numsSize; i++) {
            if (nums[i] == ans) {
                found = true;
                break;
            }
        }

        if (!found)
            return ans;

        ans++;
    }
}