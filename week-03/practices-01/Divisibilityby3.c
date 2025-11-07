#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);

    int sum = 0; 

    char s[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &s[i]);
    }
    

    for (int i = 0; i < n; i++)
    {
        sum = sum + (s[i] - 48);
    }


    if (sum % 3 == 0)
    {
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
    
}