#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    int minNum = arr[0];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minNum)
        {
            minNum = arr[i];
            index = i;
        }
    }

    printf("%d %d\n", minNum, index + 1);
    return 0;
}