#include <stdio.h>

int main() {
    int n,a[101],x,pos;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d%d",&x,&pos);
    if(pos<1||pos>n+1) {
        printf("Invalid position\n");

        return 0;
    }

    for(int i=n;i>=pos;i--)a[i]=a[i-1];
    a[pos-1]=x;
    n++;
    for(int i=0;i<n;i++)printf("%d ",a[i]);
    printf("\n");

    return 0;
}
