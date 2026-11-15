#include <stdio.h>
int main(void) {
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) sum += (double)(2 * i) / (4 * i - 1);
    printf("Sum = %.2f\n", sum);
    return 0;
}
