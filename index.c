#include <stdio.h>
int main()
{
    int n,k,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if(a[i]+a[j]==k){
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
    return 0;
}
