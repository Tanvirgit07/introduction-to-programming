#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int x = a,y = b,z = c;

    if (a > b)
    {
        int tamp = a;
        a = b;
        b = tamp;
    }

    if (a > c)
    {
        int tamp = a;
        a = c;
        c = tamp;
    }

    if (b > c)
    {
        int tamp = b;
        b = c;
        c = tamp;
    }
    
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);


    printf("\n");


    printf("%d\n", x);
    printf("%d\n",y);
    printf("%d\n", z);


    return 0;
}