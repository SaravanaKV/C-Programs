#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            if(j==0 || i==n-1 || i==j)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}