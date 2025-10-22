#include<stdio.h>
int main () {
    int a,b;

    scanf("%d %d", &a,&b);


    int sumA,sumB;
    
    sumA = a%b;
    sumB = b%a;

    if (sumA == 0 || sumB == 0)
    {
       printf("Yes");
    }else{
        printf("No");
    }


    return 0;
    
}