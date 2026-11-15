#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[100] = "";
    char word[100];
    int j = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; ; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0') {
            word[j] = sentence[i];
            j++;
        } else {
            word[j] = '\0';

            if (j > 0 && strlen(word) > strlen(longest)) {
                strcpy(longest, word);
            }

            j = 0;
        }

        if (sentence[i] == '\0') {
            break;
        }
    }

    printf("%s\n", longest);

    return 0;
}
