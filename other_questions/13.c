/*
Q2. Virus Mutation Cycle

A virus starts with a strength equal to the input value N.

For every cycle:

If the current strength is divisible by 4, divide it by 2.
Otherwise, increase it by 3.
Every 3rd cycle, the virus loses 1 extra strength.
Stop when the strength becomes 1 or less.

Print the number of cycles required.

Example
Input:
25

Output:
14

*/

#include <stdio.h>

int main(int argc, char const *argv[]){
    int virus_strength = 25;
    int cycle = 0;

    while(virus_strength > 1){
        if (virus_strength % 4 == 0){
            virus_strength /= 2;
        }else{
            virus_strength += 3;
        }
        cycle++;

        if (cycle % 3 == 0){
            virus_strength -= 1;
        }
        printf("Cycle - %d,Virus strength - %d\n", cycle, virus_strength);
    }
    printf("Final cycle is: %d", cycle);

    return 0;
}
