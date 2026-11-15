// Q “Find the first repeating lowercase alphabet in a string.”


#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i] - 'a']++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i] - 'a'] > 1) {
            printf("First repeating alphabet = %c", str[i]);
            break;
        }
    }

    return 0;
}