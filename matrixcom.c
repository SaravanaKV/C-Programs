#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n-k+1;i++){
        for(int j=i;j<k+i;j++){
            printf("%d ",a[j]);
        }
        printf("\n");
    }

    return 0;
}
