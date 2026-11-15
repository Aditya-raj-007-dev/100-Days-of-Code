#include <stdio.h>

int main() {
    char s[500];
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i];i++) {
        char x=s[i];
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')continue;
        putchar(s[i]);
    }

    return 0;
}
