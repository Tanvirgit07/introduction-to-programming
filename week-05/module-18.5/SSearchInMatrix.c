#include <stdio.h>

void searchANumber()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int x;
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == x)
            {
                printf("will take number\n");
            }else{
                printf("will not take number\n");
            }
            
        }
    }
}
int main()
{
    searchANumber();

    return 0;
}