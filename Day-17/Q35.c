#include <stdio.h>
int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors: ");
    for (int i = 1; i <= n; i++) if (n % i == 0) printf("%d ", i);
    printf("\n");
    return 0;
}
