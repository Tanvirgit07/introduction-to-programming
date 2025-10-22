#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int length = 0;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        length++;
    }

    int i = 0;
    int j = n - 1;

    int isPalindrom = 0;

    if (length == 1)
    {
        printf("YES\n");
        return 0;
    }

    while (i < j)
    {
        if (arr[i] != arr[j])
        {
            isPalindrom = 0;
            break;
        }

        isPalindrom = 1;
        i++;
        j--;
    }

    if (isPalindrom > 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}