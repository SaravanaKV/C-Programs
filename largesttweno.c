
#include <stdio.h>

int main()
{
    int n,rem,l=1,temp,l1=0,m=1,nn;
    scanf("%d",&n);
    nn=n;
    while(n>0){
        rem=n%10;
        if(rem >l){
            l=rem;
        }
        n/=10;
    }
    while(nn>0){
        rem=nn%10;
        if(rem >l1 && rem<l && rem%2==1){
            l1=rem;
        }
        nn/=10;
    }
    l=l*10;
    printf("%d",l+l1);

    return 0;
}
