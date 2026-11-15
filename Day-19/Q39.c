#include <stdio.h>
int main(void) {
    int n, product = 1, found = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 != 0) { product *= digit; found = 1; }
        n /= 10;
    }
    if (found) printf("Product of odd digits = %d\n", product);
    else printf("No odd digits\n");
    return 0;
}
