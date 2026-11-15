#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int x=2;x<=n;x++) {
        int prime=1;
        for(int d=2;d*d<=x;d++) if(x%d==0) {
            prime=0;
            break;
        }

        if(prime) printf("%d ",x);
    }

    printf("\n");

    return 0;
}
