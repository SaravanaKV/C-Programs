#include<stdio.h>
int main()
{
    int p;
    scanf("%d",&p);
    int a[p];
    for (int i=0;i<p;i+=2){
        a[i]=i*7;
        a[i+1]=i*6;
        printf("%d %d ",a[i],a[i+1]);
    }
    printf("\n%d",a[p]);
    return 0;
}
