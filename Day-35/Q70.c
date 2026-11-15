#include <stdio.h>

int main() {
    int n,a[100],k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&k);
    if(n>0)k%=n;
    for(int i=n-k;i<n;i++)printf("%d ",a[i]);
    for(int i=0;i<n-k;i++)printf("%d ",a[i]);
    printf("\n");

    return 0;
}
