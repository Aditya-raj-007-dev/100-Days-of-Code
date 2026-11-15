#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char combined[200];

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }

    strcpy(combined, str1);
    strcat(combined, str1);

    if (strstr(combined, str2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
