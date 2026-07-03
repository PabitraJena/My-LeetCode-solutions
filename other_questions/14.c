/*
Q3 : Robot Battery Drain

A robot starts with 100% battery.

Input is the number of commands.

For every command:

Battery decreases by 4.
Every 4th command consumes 2 extra battery.
Whenever battery becomes divisible by 9, recharge by 5 immediately.
Battery cannot exceed 100.

Print the remaining battery.

Example
Input:
18

Output:
37
*/

#include <stdio.h>

int main(int argc, char const *argv[]){
    int battery_percent = 100;
    int commands = 18;
    
    for (int cmd = 1; cmd <= commands && battery_percent <= 100 && battery_percent >= 0; cmd++){
        battery_percent -= 4;
        if (cmd % 4 == 0){
            battery_percent -= 2;
        }
        if (battery_percent % 9 == 0){
            battery_percent += 5;
        }
        printf("Command: %d, Battery: %d\n", cmd, battery_percent);
    }
    

    return 0;
}
