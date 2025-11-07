#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int odd = 0, even = 0;

    int arr[1001];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("%d\n", even * odd);

    return 0;
}