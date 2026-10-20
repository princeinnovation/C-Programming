#include<stdio.h>
void display_Array(int *arr, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int sort(int *arr, int size){
    int index, temp;
    for (int i = 0; i < size - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < size ; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
            
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    return 0;
}
int main(){
    int arr[] ={2,34,5,43,12,57,6,32,7,43};
    int n = sizeof(arr)/sizeof(arr[0]);
    display_Array(arr,n);
    sort(arr,n);
    display_Array(arr,n);
    return 0;
}
