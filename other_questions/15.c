/*
Q4 : Bank Investment

Month1 = ₹100
Month2 = ₹150

Each month

money =
last month
+
month before

Every third month

Tax = ₹20

Output final money.
*/

#include <stdio.h>

int main(int argc, char const *argv[]){
    int months = 10;
    int m1 = 100;
    int m2 = 150;

    int money = 0;
    printf("Month: 1,Money: %d\n", m1);
    printf("Month: 2,Money: %d\n", m2);

    for (int month = 3; month <= months; month++){
        
        money = m1 + m2;
        
        if (month % 3 == 0){
            money -= 20;
        }
        printf("Month: %d,Money: %d\n", month, money);

        m1 = m2;
        m2 = money;
        
    }
    

    return 0;
}
