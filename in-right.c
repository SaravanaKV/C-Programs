#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for(int k=i;k>0;k--)
        printf("  ");
        for (int j=0;j<n-i;j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}