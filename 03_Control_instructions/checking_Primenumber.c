
/*
    Program to check whether a number is prime or not.

    APPROACH:
    Step 1: Assume the number is prime by setting prime = 1.
    Step 2: If the number is less than or equal to 1, it is neither
            prime nor composite, so set prime = 0.
    Step 3: Start checking divisibility from 2 while i * i <= num.
            This checks possible factors up to the square root of num.
    Step 4: If num is divisible by any value of i, it is not prime.
            Set prime = 0.
    Step 5: Break the loop because once a factor is found, no further
            checking is necessary.
    Step 6: If prime is 0, print that the number is not prime;
            otherwise, print that the number is prime.
*/
#include<stdio.h>
int main(){
    int num , prime = 1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num <= 1){
        prime = 0;
    }
    else{
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }                        
        }
        
    }
    if ( prime == 0 )
    {
        printf("%d is not a prime number",num);
    }
    else{
        printf("%d is a prime number",num);
    }
    
    return 0;  
    
}
