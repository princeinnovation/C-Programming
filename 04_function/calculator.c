#include<stdio.h>
#include<math.h>
// Function to add two numbers
int sum(int num1 ,int num2){
    return num1 + num2;
}

//Function to subtract two numbers
int sub(int num1, int num2){
    return num1 - num2;
}

// Function to multiply two numbers
int product(int num1,int num2){
    return num1 * num2;
}

// Function to divide two numbers and display quotient and remainder
void divide(int num1, int num2){
    if (num2 == 0)
    {
        printf("Division by zero is not allowed\n");
    }
    else{
        printf("Quoteint = %d\nRemainder = %d",num1/num2, num1%num2);
    }
}

// Function to calculate power of a number
double power(int base, int expo){
    return pow(base,expo);
}

int main(){
    int a,b, option;
    printf("Enter numbers\n");
    scanf("%d %d",&a,&b);
    printf("Enter reqire opertor\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for power\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        printf("%d + %d = %d",a,b,sum(a,b));
        break;
    case 2:
        printf("%d - %d = %d",a,b,sub(a,b));
        break;
    case 3:
        printf("%d * %d = %d",a,b,product(a,b));
        break;
    case 4:
         divide(a,b);
         break;
    case 5:
        printf("%d power %d = %.3lf",a,b,power(a,b));
        break;
    default:
        printf("Enter a valid value");
        break;
    }
}
