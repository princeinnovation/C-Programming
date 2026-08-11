// reversing a  number
#include<stdio.h>
int main(){
    int num, rev = 0, digit, orignalNum;
    printf("Enter a Number: ");
    scanf("%d",&num);
    orignalNum = num;
    while( num != 0){
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    printf("Your Number = %d\nReverse Number = %d",orignalNum,rev);
    return 0;
}
