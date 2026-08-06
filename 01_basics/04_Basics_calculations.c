#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    printf("%d + %d = %d\n",num1,num2, num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d divides %d gives: %.2f\n",num1,num2,(float)num1/num2);
    printf("%d X %d = %d\n",num1,num2,num1*num2);
    return 0;
}
