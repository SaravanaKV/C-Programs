#include <stdio.h>

int main()
{
    int n,m;
    scanf("%d",&n);
    m=n*n;
    if(m%10==n)
    printf("Automorphic number");
    else
    printf("Not a Automorphic number");
    return 0;
}
