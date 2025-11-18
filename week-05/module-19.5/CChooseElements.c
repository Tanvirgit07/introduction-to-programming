#include<stdio.h>
int main () {
    int n,m;
    scanf("%d %d", &n,&m);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int copyA[n];
    for (int i = 0; i < n; i++)
    {
        copyA[i] = a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (copyA[i] < copyA[j])
            {      
            int temp;
            temp = copyA[i];
            copyA[i] = copyA[j];
            copyA[j] = temp;
            }
            
        }
        
    }


    long long sum = 0;
    
    
    for (int i = 0; i < m; i++)
    {
        if (copyA[i] > 0)
        {
            sum = sum + copyA[i];
        }
        
    }
    

    printf("%lld\n", sum);
    
    return 0;
    
}