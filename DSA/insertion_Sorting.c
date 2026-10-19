#include<stdio.h>

void print_Array(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void insertion_Sort(int *a,int n){
    int key,i,j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i-1;
        while(j >=0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

int main(){
    int a[] = {23,43,5,23,64,2,1,2,87,45,76};
    int n = sizeof(a)/sizeof(a[0]);
    print_Array(a,n);
    insertion_Sort(a,n);
    print_Array(a,n);
    return 0;
}
