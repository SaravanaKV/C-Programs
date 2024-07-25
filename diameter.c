#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        for(int k=i+1;k<n;k++)
        printf(" ");
        for (int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for (int i=1;i<n;i++){
        for(int k=i;k>1;k--)
        printf(" ");
        for (int j=0;j<n-i;j++){
            printf(" *");
        }
        printf("\n");
    }


    return 0;
}