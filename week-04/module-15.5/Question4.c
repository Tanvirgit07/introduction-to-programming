#include<stdio.h>
void change_last (int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            arr[i] = 100;
        }
        
    }


    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
}
int main () {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    change_last(arr, n);
    return 0;
}