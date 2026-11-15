#include <stdio.h>

int main() {
    char s[500];
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]&&s[i]!='\n';i++)printf("%c\n",s[i]);

    return 0;
}
