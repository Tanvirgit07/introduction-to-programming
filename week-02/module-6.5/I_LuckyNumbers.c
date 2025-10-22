#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);

    int firstNum;
    int lastNum;

    lastNum = a / 10;
    firstNum = a % 10;

    if (firstNum % lastNum == 0 || lastNum % firstNum == 0)
    {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
    return 0;
}