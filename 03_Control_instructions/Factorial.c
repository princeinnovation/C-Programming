#include<stdio.h>
int main(){
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num < 0)
    {
        printf("Factorial of negative number is not possible");
        return 1;
    }
    else{
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d is %d",num,factorial);
    }
    return 0;
} 
