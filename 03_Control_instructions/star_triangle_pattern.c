// star pattern
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    if (n <= 0)
    {
        printf("Enter a positive value");
    }
    else{
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++)
            {
                printf("* ");
            }       
            printf("\n");
        }
        }
        return 0;
    
}
