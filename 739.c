// 739. Daily Temperatures (Monotonic stack)
#include <stdlib.h>
#include <stdio.h>

int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize){
    *returnSize = temperaturesSize;

    int *output = (int *)calloc(temperaturesSize, sizeof(int));
    int *stack = (int *)malloc(sizeof(int) * temperaturesSize);
    int top = -1;

    for (int i = 0; i < temperaturesSize; i++){
        while (top >= 0 && temperatures[i] > temperatures[stack[top]]){
            int index = stack[top]; // Pop 
            top--;
            output[index] = i - index; // Calculate index i.e no. of days
        }
        top++;
        stack[top] = i;
    }
    free(stack);
    return output;
}