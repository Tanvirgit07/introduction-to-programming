#include <stdio.h>
int main()
{
    int a;
    long long int b;
    float m;
    char d;

    scanf("%d", &a);
    scanf("%lld", &b);
    scanf("%f", &m);
    scanf(" %c", &d);

    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%f\n", m);
    printf("%c\n", d);


    return 0;
}