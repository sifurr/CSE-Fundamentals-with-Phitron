#include<stdio.h>
int main(){

    // int can handle maximum 10 digit
    // int a=1000000000;
    // printf("%d", a);
    
    // maximum 20digit
    // long long int b=100000000000;
    // printf("%lld", b);

    // can handle 6-7 characters after point
    // float b=255.4454549896;
    // printf("%f", b);

    // can handle 15-16 characters after point
    double b=2.123456789101112131415;
    printf("%0.15lf", b);

    return 0;
}