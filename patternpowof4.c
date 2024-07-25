#include <stdio.h>
#include<math.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        j=pow(i,4);
        printf("%d ",j);
    }

    return 0;
}
