#include <stdio.h>

void findMaxValue(int arr[], int size,int start)
{
    if (start > size - 1)
    {
        return;
    }


    printf("%d", arr[start]);


    findMaxValue(arr, size, start + 1);

    // int max = arr[0];
    // if (arr[start] > max)
    // {
    //     max = arr[start];
    // }


    
    
}
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    findMaxValue(a, n, 0);
    return 0;
}