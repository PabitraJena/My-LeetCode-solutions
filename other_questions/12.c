/*
village containing n people, every year 20% of the population migrates to another place and also every year 15 new people are coming to this village.

If it is a leap year you are going to make 9 more people leave the village

By taking input of n resembling total number if people in the village at the start

find out how many are remaining after certain year
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int n = atoi(argv[1]);
    int after_year = atoi(argv[2]);

    for (int year = 1; year <= after_year; year++){
        n -= ((n * 20) / 100);
        n += 15;

        if (year % 4 == 0){
            n -= 9;
        }
        
        printf("Year: %d, People: %d\n", year, n);
    }

    printf("total people after %d years %d", after_year, n);

    return 0;
}