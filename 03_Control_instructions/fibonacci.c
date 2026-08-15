#include<stdio.h>
int main(){
    int n,first = 0, second =1, next;
    printf("Enter number of terms\n");
    scanf("%d",&n);
    if (n <= 0)
    {
        printf("Enter a positive number");
    }
    else{
        for (int i = 0; i < n; i++)
        {
            printf("%d",first);

            if (i < n-1){
                printf(", ");
            }
            next = first + second;
            first = second;
            second = next;            
        }
    printf("\n");    
    }
    return 0;
}
