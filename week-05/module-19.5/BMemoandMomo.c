#include<stdio.h>
int main () {
    long long me,mo,k;
    scanf("%lld %lld %lld", &me,&mo,&k);


    if (me%k == 0 && mo%k == 0)
    {
        printf("Both\n");
    }else if (me%k == 0 && mo%k != 0)
    {
        printf("Memo\n");
    }else if (me%k != 0 && mo%k == 0)
    {
        printf("Momo\n");
    }else if (me%k != 0 && mo%k != 0)
    {
        printf("No One\n");
    }

    return 0;
}