#include<stdio.h>
#include<string.h>
int main () {
    char s[10001];
    scanf("%s", s);

    int freq[27] = {0};

    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        int val = s[i] - 'a';
        freq[val]++;
    }


    for (int i = 0; i < 27; i++)
    {
        if (freq[i] == 0)
        {
            continue;
        }
        
        printf("%c - %d\n",i + 'a', freq[i]);
    }

    return 0;
}