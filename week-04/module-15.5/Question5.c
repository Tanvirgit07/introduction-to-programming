#include<stdio.h>
void swap_number (int a, int b){
    int tamp; 
    tamp = a;
    a = b;
    b = tamp;

    printf("%d %d", a, b);
}
int main () {
    int a,b;
    scanf("%d %d", &a,&b);

    swap_number(a,b);
    return 0;
}