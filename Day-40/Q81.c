#include <stdio.h>

int main() {
    char s[500];
    fgets(s,sizeof(s),stdin);
    int n=0;
    while(s[n]!='\0'&&s[n]!='\n')n++;
    printf("%d\n",n);

    return 0;
}
