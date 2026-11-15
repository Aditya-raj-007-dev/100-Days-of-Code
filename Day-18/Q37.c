#include <stdio.h>
int main(void) {
    int a, b, x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = a; y = b;
    while (y != 0) { int r = x % y; x = y; y = r; }
    if (x < 0) x = -x;
    if (a == 0 || b == 0) printf("LCM = 0\n");
    else { int lcm = (a / x) * b; if (lcm < 0) lcm = -lcm; printf("LCM = %d\n", lcm); }
    return 0;
}
