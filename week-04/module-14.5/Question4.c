#include<stdio.h>
void small_to_Captial(char a) {
    printf("%c", a + 32);
}
int main () {
    char a;
    scanf("%c", &a);
    small_to_Captial(a);
    return 0;
}