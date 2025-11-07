#include <stdio.h>

int findMinNumber(int a[], int size)
{
    int minValue = a[0];
    for (int i = 0; i < size; i++)
    {
        if (minValue > a[i])
        {
            minValue = a[i];
        }
    }

    return minValue;
}

int findMaxNumber(int a[], int size)
{
    int minValue = a[0];
    for (int i = 0; i < size; i++)
    {
        if (minValue < a[i])
        {
            minValue = a[i];
        }
    }

    return minValue;
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

    int min = findMinNumber(a, n);
    int max = findMaxNumber(a, n);

    printf("%d %d\n", min, max);
    return 0;
}