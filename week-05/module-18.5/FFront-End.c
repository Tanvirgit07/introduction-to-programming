#include<stdio.h>

void frontEndPrint(int a[], int size) {
    int i = 0;
    int j = size - 1;

    while (i <= j)
    {
        if (i == j)
        {
            printf("%d \n", a[i]);
            return;
        }
        
        printf("%d %d ", a[i], a[j]);
        i++;
        j--;
    }
    
    
}
int main () {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    frontEndPrint(arr, n);
   return 0; 
}