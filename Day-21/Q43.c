#include <stdio.h>
int main(void) {
    int n, original, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        int digit = n % 10, fact = 1;
        for (int i = 1; i <= digit; i++) fact *= i;
        sum += fact;
        n /= 10;
    }
    if (original == 0) sum = 1;
    if (sum == original) printf("Strong number\n");
    else printf("Not a strong number\n");
    return 0;
}
