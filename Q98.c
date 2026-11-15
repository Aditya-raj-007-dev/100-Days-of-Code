#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int lastSpace = -1;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    int length = strlen(name);

    if (length > 0 && name[length - 1] == '\n') {
        name[length - 1] = '\0';
        length--;
    }

    for (int i = 0; i < length; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    if (lastSpace == -1) {
        printf("%s\n", name);
        return 0;
    }

    printf("%c.", name[0]);

    for (int i = 1; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c.", name[i + 1]);
        }
    }

    printf(" %s\n", name + lastSpace + 1);

    return 0;
}
