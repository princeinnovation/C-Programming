#include<stdio.h>

int main(){
    int num1,num2, option;

    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);

    printf("Enter one option");

    printf("\nChoose an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");

    scanf("%d",&option);

    switch (option)
    {
    case 1:
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;

    case 2:
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;

    case 3:
        printf("%d * %d = %d",num1,num2,num1*num2);
        break;

    case 4:
        if (num2 != 0)
        {
            printf("%d divides %d \n  quotient = %d and\n  remainder = %d",num1,num2,num1/num2,num1%num2);
            break;
        }
        else{
            printf("Division by zero is not possible");
        }        
    
    default:
        printf("you choose invalid option");
        break;
    }
}
