#include <stdio.h>

int main()
{
    int n1,n2,s1=0,s2=0;
    scanf("%d%d",&n1,&n2);
    for (int i=1;i<n1;i++){
        if(n1%i==0)
        s1+=i;
    }
    for (int i=1;i<n2;i++){
        if(n2%i==0)
        s2+=i;
    }
    if(s1==n2 && s2==n1)
    printf("Amicable Pair");
    else
    printf("Not a amicable pair");
    return 0;
}