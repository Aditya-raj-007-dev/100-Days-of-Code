#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            printf("\n");
        }
    }

    return 0;
}
