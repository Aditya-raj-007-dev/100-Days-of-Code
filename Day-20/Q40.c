#include <stdio.h>
int main(void) {
    long long binary, temp, complement = 0, place = 1;
    int digits = 0;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    temp = binary;
    if (temp == 0) digits = 1;
    while (temp != 0) { digits++; temp /= 10; }
    temp = binary;
    for (int i = 0; i < digits; i++) {
        int digit = temp % 10;
        if (digit != 0 && digit != 1) { printf("Invalid binary number\n"); return 0; }
        complement += (1 - digit) * place;
        place *= 10;
        temp /= 10;
    }
    printf("1's complement = %0*lld\n", digits, complement);
    return 0;
}
