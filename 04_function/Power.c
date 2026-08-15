#include<stdio.h>
int power(int base, int expo){
    int result =1;
    for (int i = 1; i <= expo ; i++)
    {
        result *= base;
    }
    return result;
    
}
int main(){
    int num1, num2;
    printf("Enter a number and its power respectively");
    scanf("%d %d",&num1, &num2);
    printf("%d ^ %d = %d",num1,num2,power(num1,num2));
    return 0;
}
