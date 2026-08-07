#include<stdio.h>
int main(){
    int age;
    printf("Enter age\n");
    scanf("%d",&age);
    if(age < 0){
        printf("Age is invalid");
    }
    else if(age < 18)  // age is beteen 0 to 17
    {
        printf("You are not eligible");
    }
    else  // now only one condition is left,age is greater than 18
    {
        printf("You are eligible");
    }
    return 0;
}
