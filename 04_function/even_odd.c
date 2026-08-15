#include<stdio.h>

// Function to check whether a number is even or odd
void even_odd(int num){
    printf("%d is an %s\n",num,num % 2 == 0 ? "even number" : "odd number");
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    even_odd(n);
    return 0;
}
