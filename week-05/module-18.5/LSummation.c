#include <stdio.h>
int summation(int arr[], int val, int start)
{
   
    if (start > val - 1)
    {
        return;
    }

    int sum = sum + summation(arr, val, start + 1);
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

   int total = summation(arr, n, 0);

   printf("%d\n", total);

    return 0;
}