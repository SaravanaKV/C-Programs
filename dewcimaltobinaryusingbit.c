
#include <stdio.h>

int main()
{
    int n,j;
    scanf("%d",&n);
    for(int i=7;i>=0;i--){
        j=n>>i;
        printf("%d",j&1);
    }

    return 0;
}
