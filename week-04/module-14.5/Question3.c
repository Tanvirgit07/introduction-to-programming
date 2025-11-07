#include <stdio.h>

int charToAscii(char b)
{
    int val;
    val = (int)b;
    return val;
}
int main()
{
    char a;
    scanf("%c", &a);

    printf("%d", charToAscii(a));
    return 0;
}