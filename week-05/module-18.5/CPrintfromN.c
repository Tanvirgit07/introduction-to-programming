#include <stdio.h>

void print1ToN(int val, int start)
{

    if (start > val)
    {
        return;
    }

    print1ToN(val, start + 1);
    if (start == 1)
    {
        printf("%d", start);
        return;
    }
    
    printf("%d-", start);
}
int main()
{
    int n;
    scanf("%d", &n);

    print1ToN(n, 1);
    return 0;
}