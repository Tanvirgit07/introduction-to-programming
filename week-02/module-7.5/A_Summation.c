#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int sum = 0;

    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    sum = llabs(sum);

    printf("%lld\n", sum);

    return 0;
}