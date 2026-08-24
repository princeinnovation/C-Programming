#include<stdio.h>
int main(){
    int length = 0,i, pallindrome = 1;
    char string[50];
    printf("Enter a strig: ");
    scanf("%s",string);
    while(string[length] != '\0'){
        length++;
    }
    for (int i = 0; i < length/2; i++)
    {
        if (string[i] != string[length-1-i])
        {
            pallindrome = 0 ;
            break;
        }
        
    }
    if(pallindrome == 1 ){
        printf("%s is a pallindrome string",string);
    }
    else{
        printf("%s is not a pallindrome string",string);
    }
    return 0;


}
