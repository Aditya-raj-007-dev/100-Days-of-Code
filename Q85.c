#include <stdio.h>

int main() {
    char s[500];
    fgets(s,sizeof(s),stdin);
    int n=0;
    while(s[n]&&s[n]!='\n')n++;
    for(int i=n-1;i>=0;i--)putchar(s[i]);
    putchar('\n');

    return 0;
}
