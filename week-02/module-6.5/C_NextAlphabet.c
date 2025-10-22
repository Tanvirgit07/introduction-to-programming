#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);

    if (a == 'z')
    {
        printf("a\n");
    }
    else if (a == 'Z')
    {
        printf("A\n");
    }
    else
    {
        printf("%c\n", a + 1);
    }

    return 0;
}