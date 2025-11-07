#include<stdio.h>

int sum(int a,int b){
    int sum = a + b;
    return sum;
}
int main () {
    int n,m;
    scanf("%d %d", &n, &m);
    int extranalSum = sum(n,m);
    printf("%d", extranalSum);
    return 0;
}