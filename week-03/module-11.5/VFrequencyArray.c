// Time limit exceeded on test 2
// #include <stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int j = 1;

//     while (j <= m)
//     {
//         int num = 0;
//         for (int i = 0; i < n; i++)
//         {

//             if (j == arr[i])
//             {
//                 num++;
//             }
//         }
//         j++;
//         printf("%d\n", num);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[m + 1];

    for (int i = 0; i <= m; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        arr[x]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}