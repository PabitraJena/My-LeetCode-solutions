// The Zombie problem from class

#include <stdio.h>

int main(void) {
    int n = 20;
    int max_generation = 20;
    int arr[max_generation];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 4;
    arr[3] = 7;

    if (n <= 3) {
        printf("%d\n", arr[n]);
    } else {
        for (int i = 4; i <= n; i++) {
            int val = 2 * arr[i - 1] - arr[i - 4];

            if (val % 9 == 0) {
                val -= 1;
            }

            arr[i] = val;
        }
    }

    for (int i = 0; i <= n; i++){
        printf("Generation: %d, Zombies: %d\n", i , arr[i]);
    }
    

    return 0;
}