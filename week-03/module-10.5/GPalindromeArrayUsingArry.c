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

    int copyArr[n];
    for (int i = 0; i < n; i++)
    {
        copyArr[i] = arr[i];
    }

    int isSame = 1;

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != copyArr[i])
        {
            break;
            isSame = 0;
        }
    }

    if (isSame == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}