#include <stdio.h>

int main() {
    char s[500];
    int sp=0,d=0,special=0;
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i]&&s[i]!='\n';i++) {
        if(s[i]==' ')sp++;
        else if(s[i]>='0'&&s[i]<='9')d++;
        else if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')))special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n",sp,d,special);

    return 0;
}
