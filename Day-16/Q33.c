#include <stdio.h>
int main(void) {
    int n, original, temp, digit, digits = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n; temp = n;
    if (temp == 0) digits = 1;
    while (temp != 0) { digits++; temp /= 10; }
    temp = n;
    while (temp != 0) {
        int p = 1;
        digit = temp % 10;
        for (int i = 1; i <= digits; i++) p *= digit;
        sum += p;
        temp /= 10;
    }
    if (sum == original) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    return 0;
}
