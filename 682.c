// 682. Baseball Game

#include <stdlib.h>
#include <string.h>

int calPoints(char** operations, int operationsSize){
    int stack[operationsSize];
    int top = 0;

    for (int i = 0; i < operationsSize; i++){
        if (strcmp(operations[i], "C") == 0){
            top--;
        }
        else if (strcmp(operations[i], "D") == 0){
            stack[top] = 2 * stack[top - 1];
            top++;
        }
        else if (strcmp(operations[i], "+") == 0){
            stack[top] = stack[top - 1] + stack[top - 2];
            top++;
        }
        else{
            stack[top] = atoi(operations[i]);
            top++;
        }
    }
    int sum = 0;
    for (int i = 0; i < top; i++) {
        sum += stack[i];
    }
    return sum;
}
