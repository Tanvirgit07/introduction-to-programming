#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);

    int arr1[1001];
    int arr2[1001];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }



    
    for (int i = 0, j = n -1; i < n, j >= 0; i++,j--)
    {
        printf("%d ", arr1[i] + arr2[j]);
    }
    


    return 0;
    
}