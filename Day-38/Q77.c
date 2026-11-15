#include <stdio.h>

int main() {
    int n,a[20][20],ok=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i][i]==a[j][j])ok=0;
    printf(ok?"Distinct\n":"Not distinct\n");

    return 0;
}
