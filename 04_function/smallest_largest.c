#include<stdio.h>
// Function to find largest from three numbers

int largest(int num1, int num2, int num3){
    if (num1 >= num2 && num1 >= num3){
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3){
        return num2;
    }
    else{
        return num3;
    }
}


// function to find smallest from three numbers
int smallest(int num1, int num2, int num3){
      if (num1 <= num2 && num1 <= num3){
        return num1;
    }
    else if (num2 <= num1 && num2 <= num3){
        return num2;
    }
    else{
        return num3;
    }
    
}
int main(){
    int a , b ,c; 
    printf("Enter Number\n");
    scanf("%d %d %d", &a, &b ,&c);
    if (a == b  && b== c)
    {
        printf("All numbers are equal");
        return 0;
    }
    printf("%d is largest\n%d is smallest",largest(a,b,c),smallest(a,b,c));
}
