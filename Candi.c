#include <stdio.h>

int main()
{
    int n=10,k=5,c;
    scanf("%d",&c);
    if(c<=k)
        printf("NUMBER OF CANDIES SOLD : %d\nNUMBER OF CANDIES AVAILABLE : %d",c,n-c);
    return 0;
}