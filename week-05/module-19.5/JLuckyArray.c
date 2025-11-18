#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        
    }

    int frq[n];
    for (int i = 0; i < n; i++)
    {
        frq[i] = 0;
    }


    for (int i = 0; i < n; i++)
    {
        if (a[i] == min)
        {
            frq[i] = 1;
        }
        
    }


    int frqSum = 0;

    for (int i = 0; i < n; i++)
    {
        frqSum = frqSum + frq[i];
    }
    
    
    if (frqSum % 2 != 0)
    {
        printf("Lucky\n");
    }else{
        printf("Unlucky\n");
    }
    
    
    return 0;
}