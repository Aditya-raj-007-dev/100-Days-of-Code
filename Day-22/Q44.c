#include <stdio.h>
int main(void) {
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    if (n >= 1) sum = 1.0;
    for (int i = 2; i <= n; i++) sum += (double)(2 * i - 1) / (2 * i);
    printf("Sum = %.2f\n", sum);
    return 0;
}
