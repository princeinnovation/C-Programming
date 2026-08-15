// greet function
#include<stdio.h>

void greet(char name[20], int age){
    printf("Hello User\n");
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
}
int main(){
    char myname[20];
    int myage;
    printf("Write your name: ");
    scanf("%19s",myname);
    printf("Enter your age: ");
    scanf("%d",&myage);
    greet(myname,myage);
    return 0;
}
