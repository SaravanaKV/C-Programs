#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(int k=i;k<n;k++)
        printf(" ");
        for (int j=0;j<i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}