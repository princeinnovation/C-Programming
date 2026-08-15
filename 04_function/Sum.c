// sum of  numbers using function
#include<stdio.h>
int add(int a, int b){
    return a + b;
}
int main(){
    int num1, num2;
    printf("Enter numbers\n");
    scanf("%d %d",&num1, &num2);
    printf("%d + %d = %d",num1,num2, add(num1,num2));
    return 0;
}
