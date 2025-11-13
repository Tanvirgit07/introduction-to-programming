#include <stdio.h>
#include<stdlib.h>

void diagonalSumation()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    int primarySum = 0;
    int secondrySum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                secondrySum = secondrySum + arr[i][j];
            }
            
            if (i == j)
            {
                primarySum = primarySum + arr[i][j];
            }
            
            
        }

    }


    printf("%d\n", abs(primarySum - secondrySum));
}
int main()
{

    diagonalSumation();
    return 0;
}