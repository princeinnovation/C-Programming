#include<stdio.h>
int main(){
    char string[20];
    int length =0;
    printf("Enter a strig: ");
    scanf("%s",string);
    while ( string[length] != 0   )
    {
        length++;
    }
    printf("%d",length);
    
}   
