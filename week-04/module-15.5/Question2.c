#include <stdio.h>

int my_len(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}
int main()
{
    char s[100];
    scanf("%s", s);
    printf("%d", my_len(s));
    return 0;
}