#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int sum = 0;

    char s[n + 1];
    scanf("%s", s);

    for (int i = 0; i < n; i++)
    {
        sum = sum + s[i] - 48;
    }

    printf("%d\n", sum);

    return 0;
}