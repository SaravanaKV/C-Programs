#include <stdio.h>
#include<math.h>
int main()
{
    int n,j,p=2;
    scanf("%d",&n);
    printf("%d ",p);
    for (int i=1;i<n;i++){
        p=p+(p-1);
        printf("%d ",p);
    }

    return 0;
}
