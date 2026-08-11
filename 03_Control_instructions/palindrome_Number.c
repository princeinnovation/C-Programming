// Program to check whether a number is a palindrome or not.
 
#include<stdio.h>
int main(){
    int num,orignalNum, rev, digit;
    printf("Enter a Number: ");
    scanf("%d",&num);
    orignalNum = num;
    for (rev = 0; num !=0; num = num /10)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
    }
    if (orignalNum == rev)
    {
        printf("%d is pallindrome",orignalNum);
    }
    else{
        printf("%d is not palindrome",orignalNum);
    }
    
    return 0;
    
}
