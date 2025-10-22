#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);

    int a;
    int Psum = 0;
    int Nsum = 0;

    for (int i = 1; i <= n; i++)
    {
       scanf("%d", &a);

        if (a > 0)
        {
            Psum = Psum + a;
        }else{
            Nsum = Nsum + a;
        }
        
    }

    printf("%d %d", Psum,Nsum);

    return 0;
    
}