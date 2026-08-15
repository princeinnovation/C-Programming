#include<stdio.h>
int factorial(int num){
    int fact;
    if ( num == 0 || num == 1)
    {
        return 1;
    }
    else{
        fact = num * factorial(num-1);
        return fact;
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("factorial of %d is: %d",num, factorial(num));
}
