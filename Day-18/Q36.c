#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while (b != 0) { int r = a % b; a = b; b = r; }
    if (a < 0) a = -a;
    printf("HCF = %d\n", a);
    return 0;
}
