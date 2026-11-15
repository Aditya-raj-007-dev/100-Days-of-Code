#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int start = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int length = strlen(sentence);

    if (length > 0 && sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
        length--;
    }

    for (int i = 0; i <= length; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            for (int j = i - 1; j >= start; j--) {
                printf("%c", sentence[j]);
            }

            if (sentence[i] == ' ') {
                printf(" ");
            }

            start = i + 1;
        }
    }

    printf("\n");

    return 0;
}
