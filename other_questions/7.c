// Su of digits untill single digit remains

#include <stdio.h>

int func(long long x){
    long long sum = 0;
    while (x){
        sum = sum + (x % 10);
        x /= 10;
    }
    
    // printf("%d\n", sum);
    
    if (sum > 9){
        return func(sum);
    }
    return sum;
}

int main(int argc, char const *argv[]){
    long long num = 69184504802493710;
    long long x = func(num);

    long long rem = x % 9;
    if (rem == 0){
        printf("9\n");
    }else{
        printf("%lld\n", rem);
    }
    
    long long res = 1 + ((x - 1) % 9);
    printf("%lld\n", res);

    printf("%lld\n", x);

    return 0;
}
