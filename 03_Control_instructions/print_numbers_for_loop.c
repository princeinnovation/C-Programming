// Program to print numbers from 0 to N using a for loop.
#include<stdio.h>
int main(){
    int num;
        printf("Enter how much numbers you want to write: ");
    scanf("%d",&num);

    if(num < 1){
        printf("Please enter a non negative number");
    }
    
    else{
        for (int i = 1; i <= num; i++)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}
