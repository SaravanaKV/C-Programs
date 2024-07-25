#include <stdio.h>
#include<math.h>
int main()
{
    int n,m,len,r,res=0,nn;
    scanf("%d",&n);
    m=n;
    nn=n;
    while(m>0){
        len++;
        m/=10;
    }
    while(n>0){
        r=n%10;
        res=res+pow(r,len);
        n/=10;
    }
    if (res==nn)
    printf("Amstrong number");
    else
    printf("Not Amstrong number");
    return 0;
}
