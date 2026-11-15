#include <stdio.h>

int main() {
    char s[500];
    fgets(s,sizeof(s),stdin);
    int n=0,ok=1;
    while(s[n]&&s[n]!='\n')n++;
    for(int i=0;i<n/2;i++)if(s[i]!=s[n-1-i]) {
        ok=0;
        break;
    }

    printf(ok?"Palindrome\n":"Not palindrome\n");

    return 0;
}
