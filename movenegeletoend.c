//3.Move all negative elements to one side of the array  in C

#include <stdio.h>
int main()
{
    int n,k=0,j=0;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        if(a[i]>=0){
        a[k++]=a[i];
        printf("%d ",a[i]);
        }
        else
        b[j++]=a[i];
    }
    for (int i=0;i<j;i++){
        printf("%d ",b[i]);
    }
    return 0;
}