#include<stdio.h>
int main(){
    float cel,fehr;
    printf("Enter Value in Celcious\n");
    scanf("%f",&cel);
    fehr = (cel * 9/5) + 32;
    printf("%.2f celsius = %.2f Fehrenait",cel,fehr);
    return 0;
}
