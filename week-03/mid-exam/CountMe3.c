#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i = 0;

    while (i < n)
    {
        char s[10001];
        scanf("%s", s);
        int len = strlen(s);

        int capital = 0;
        int small = 0;
        int digit = 0;

        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                capital++;
            }
            else if (s[i] >= 97 && s[i] <= 122)
            {
                small++;
            }
            else if (s[i] >= 48 && s[i] <= 57)
            {
                digit++;
            }
        }

        printf("%d %d %d\n", capital, small, digit);

        i++;
    }

    return 0;
}