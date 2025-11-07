#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];

    int dividedTwo = 0;
    int dividedThree = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            dividedTwo++;
        }
        else if (arr[i] % 3 == 0)
        {
            dividedThree++;
        }
        else if (arr[i] % 2 == 0 && arr[i] % 3 == 0)
        {
            dividedTwo++;
        }
    }

    printf("%d %d\n", dividedTwo, dividedThree);

    return 0;
}