#include <stdio.h>

int main()
{
    int n,j=0,k=0;
    scanf("%d",&n);
    int a[n],o[n];
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (int i=0;i<n;i++){
        if(a[i]!=0){
        a[k++]=a[i];
        printf("%d ",a[i]);
        }
    }
    for (int i=k;i<n;i++){
        a[k]=0;
        printf("%d ",a[k]);
    }
    return 0;
}
