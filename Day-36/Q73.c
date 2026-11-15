#include <stdio.h>

int main() {
    int r,c,a[20][20],sum[20]= {
        0
    }

    ;
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)for(int j=0;j<c;j++) {
        scanf("%d",&a[i][j]);
        sum[i]+=a[i][j];
    }

    for(int i=0;i<r;i++)printf("%d ",sum[i]);
    printf("\n");

    return 0;
}
