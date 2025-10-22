#include <stdio.h>
int main()
{

    int a, div;
    scanf("%d", &a);

    div = a / 1000;

    if (div % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}