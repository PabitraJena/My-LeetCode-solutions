// Frog and well problem

#include <stdio.h>

int main(){
    int frog_height = 0;
    int days = 0;

    while (frog_height < 10){
        days++;
        frog_height += 3;

        if (frog_height >= 10){
            break;
        }

        frog_height -= 2;
    }

    printf("The frog reached the top in %d days.\n", days);

    return 0;
}