// program to calculate compound interest
#include<stdio.h>
#include<math.h>

double comp(double principal, double rate, int n, float time){
    double ci, amount;
    amount = principal * pow(1 + rate/(100.0*n),n*time);
    ci = amount - principal;
    return ci;
}

int main(){
    double p, r;
    int n;
    float t;
    printf("Enter principal amount: ");
    scanf("%lf",&p);
    printf("Enter annual interest rate : ");
    scanf("%lf",&r);
    printf("Enter number of time inteest is compounded in a yeasr: ");
    scanf("%d",&n);
    printf("Enter time in year: ");
    scanf("%f",&t);
    printf("%.2lf",comp(p,r,n,t));
    return 0;
}
