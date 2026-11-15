#include <stdio.h>

int main() {
    int n,a[100],x,l=0,r,found=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    r=n-1;
    while(l<=r) {
        int m=(l+r)/2;
        if(a[m]==x) {
            found=m;
            break;
        }

        if(a[m]<x)l=m+1;
        else r=m-1;
    }

    if(found>=0)printf("Found at position %d\n",found+1);
    else printf("Not found\n");

    return 0;
}
