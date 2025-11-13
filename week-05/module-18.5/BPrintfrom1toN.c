#include <stdio.h>

void print1ToN(int val,int start)
{
    printf("%d\n", start);

    if (start >= val)
    {
        return; 
    }
    

    print1ToN(val, start + 1);
}
int main()
{
    int n;
    scanf("%d", &n); 

    print1ToN(n, 1);
    return 0;
}