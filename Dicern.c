#include <stdio.h>
#include<math.h>
int main()
{
    int n,l=0,rem,m,p,s=0;
    scanf("%d",&n);
    m=n;
    p=n;
    while(n>0){
        l++;
        n/=10;
    }
    while(m>0){
        rem=m%10;
        s=s+pow(rem,l);
        l--;
        m/=10;
    }
    if(p==s)
    printf("Yes");
    else
    printf("No");
}