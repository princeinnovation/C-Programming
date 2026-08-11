/*Adding digits of a number
Approach
    let Number = 123

Step 1: 123 % 10 = 3  → last digit = 3
        123 / 10 = 12 → number becomes 12

Step 2: 12 % 10 = 2   → last digit = 2
        12 / 10 = 1   → number becomes 1

Step 3: 1 % 10 = 1    → last digit = 1
        1 / 10 = 0    → number becomes 0

Sum = 3 + 2 + 1 = 6 ✅
*/
#include<stdio.h>
int main(){
    int num ,sum = 0,digit, orignalnum;
    printf("Enter a number: ");
    scanf("%d",&num);
    orignalnum = num;
    if (num <= 0)
    {
        num = -num;
    }
    
    while (num != 0)
    {
        digit = num % 10;    //Extract last digit
        sum = sum + digit;   // add last digit
        num = num / 10;      // removing last digit
    }
    printf("sum of the digits of %d is %d",orignalnum,sum);
    return 0;
}
    
    
