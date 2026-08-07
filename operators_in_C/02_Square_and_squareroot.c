#include<stdio.h>
#include<math.h>
int main(){
    float num;
    printf("Enter a number\n");
    scanf("%f",&num);
    printf("Square of %.1f is: %.2f\nSquareroot of %.14f is: %.2f",num,num*num,num,sqrt(num));
    return 0;
}
