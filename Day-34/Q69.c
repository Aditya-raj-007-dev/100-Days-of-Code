#include <stdio.h>

int main() {
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int largest=a[0],second=0,has=0;
    for(int i=1;i<n;i++)if(a[i]>largest)largest=a[i];
    for(int i=0;i<n;i++)if(a[i]!=largest&&(!has||a[i]>second)) {
        second=a[i];
        has=1;
    }

    if(has)printf("%d\n",second);
    else printf("No second largest element\n");

    return 0;
}
