#include <stdio.h>
int main()
{
    int n,m=0,max=0,h=0;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        scanf("%d",&b[i]);
        m+=a[i]-b[i];
        if(m>max)
        max=m;
        h++;
    }
    printf("The maximum numberof guests within %d hours is %d",h,max);
    return 0;
}
