#include<stdio.h>

long long calculateFactrola (int num) {
    if (num == 1)
    {
        return 1;
    }
    long long sum = num * calculateFactrola(num - 1);
    return sum;
    
}
int main () {
    int n;
    scanf("%d", &n);
    long long totalSum = calculateFactrola(n);
    printf("%d\n", totalSum);
    return 0;
}