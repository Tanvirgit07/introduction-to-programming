#include<stdio.h>
#include<stdlib.h>

int my_Abs(int val) {
    return abs(val);
}
int main () {

    int n;
    scanf("%d", &n);

    printf("%d", my_Abs(n));
    return 0;
}