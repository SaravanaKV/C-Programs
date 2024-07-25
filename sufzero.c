#include <stdio.h>

int main()
{
    int n,j=0;
    scanf("%d",&n);
    int a[n],o[n];
    for (int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (int i=0;i<n;i++){
        if(a[i]!=0)
        printf("%d ",a[i]);
        else{
        o[j]=a[i];
        j++;
        }
    }
    for (int i=0;i<j;i++)
        printf("%d ",o[i]);
    return 0;
}
