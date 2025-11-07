#include<stdio.h>
#include<string.h>
int main () {
    char s1[1001];
    char s2[1001];

    scanf("%s",s1);
    scanf("%s", s2);


    int s,e;
    scanf("%d %d", &s ,&e);


    int len1 = strlen(s1);
    int len2 = strlen(s2);


    if (e >= len2)
    {
        e = len2 -1;
    }
    


    for (int i = 0; i < len1; i++)
    {
        printf("%c",s1[i]);
    }

    for (int i = s; i <= e; i++)
    {
        printf("%c", s2[i]);
    }
    


    return 0;
}