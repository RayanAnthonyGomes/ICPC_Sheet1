#include<stdio.h>
#include <math.h>
int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);

    int sum = X + Y;
    printf("%d + %d = %d\n", X, Y, sum);
    
    long long mul = (long long)X * Y;
    printf("%d * %d = %lld\n", X, Y, mul);
    
    int sub = X - Y;
    printf("%d - %d = %d\n", X, Y, sub);
    
    return 0;
}