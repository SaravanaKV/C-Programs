#include <stdio.h>

int main()
{
    int n,r,l=1,t=1,b,val=1,i,j;
    scanf("%d",&n);
    b=n;
    r=n;
    int a[n][n];
    while(val<n*n){
        for (i=l;i<=r;i++){
            a[t][i]=val++;
            
        }
        t++;
        for (i=t;i>=b;i--){
            a[i][r]=val++;
        }
        r--;
        for (i=r;i>=l;i--){
            a[b][i]=val++;
        }
        b--;
        for (i=b;i<=r;i++){
            a[i][l]=val++;
        }
        l++;
    }
    for(i=1;i<=n;i++){
        for (j=1;i<=n;j++){
            printf("%d ",a[i][j]);
        }
    }
    return 0;
}