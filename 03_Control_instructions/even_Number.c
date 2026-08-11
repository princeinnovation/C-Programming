// Program to print all even numbers from 0 to N using a for loop.
#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i = 0; i <= n; i++)
    {
    if (i % 2 == 0){
        printf("%d\n", i);
        }
    }
    return 0;
}
