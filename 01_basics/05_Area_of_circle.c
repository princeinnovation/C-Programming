#include<stdio.h>
int main(){
    float rad;
    const float pi = 3.142857;
    printf("Enter radious of circle\n");
    scanf("%f",&rad);

    printf("Area of Circle is %.2f", pi * rad * rad);

    return 0;
}
