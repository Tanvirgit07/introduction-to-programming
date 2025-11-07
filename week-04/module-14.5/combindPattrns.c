#include<stdio.h>
int main () {
    int n;
    scanf("%d", &n);


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++) //ai jiga te space hoba (n-i)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2*i-1; j++) //star print hoba (2*i-1)
        {
            printf("*");
        }

        printf("\n");
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)  //space print hoba i 
        {
            printf(" ");
        }

        for (int k = 0; k < 2*(n-i)-1; k++)  // star print hoba (2*(n-i)-1)
        {
            printf("*");
        }
        
        printf("\n");
    }
}