#include <stdio.h>
int main(void) {
    int n, first, last, power = 1, temp, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n >= 0 && n < 10) { printf("After swapping = %d\n", n); return 0; }
    temp = n; if (temp < 0) temp = -temp;
    last = temp % 10;
    while (temp >= 10) { temp /= 10; power *= 10; }
    first = temp;
    temp = n; if (temp < 0) temp = -temp;
    result = temp - first * power - last + last * power + first;
    if (n < 0) result = -result;
    printf("After swapping = %d\n", result);
    return 0;
}
