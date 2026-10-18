#include<stdio.h>

int print_array(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int bubble_sort(int *a, int n){
    int tempp ,i,j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                tempp = a[j];
                a[j] = a[j+1];
                a[j+1] = tempp;
            }
        }  
    }
    
}
int main(){
    int a[] = {5,3,7,23,1,2,34,17};
    int n = 8;
    print_array(a,n);
    bubble_sort(a,n);
    print_array(a,n);

    return 0;
}
