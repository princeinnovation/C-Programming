// Program to check whether a number is positive, negative, or zero.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num == 0){
        printf("Number is zero");
    }
    else if (num < 0)
    {
        printf("Number is negative");
    }
    else{
        printf("Number is positve");
    }
    return 0;
    
}
