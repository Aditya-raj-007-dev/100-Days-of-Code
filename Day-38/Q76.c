#include <stdio.h>

int main() {
    int n,a[20][20],ok=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(a[i][j]!=a[j][i])ok=0;
    printf(ok?"Symmetric\n":"Not symmetric\n");

    return 0;
}
