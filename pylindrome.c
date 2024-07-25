#include<math.h>
#include <stdio.h>

int main()
{
    int n,s=0,l=0,m,mm,nn;
    scanf("%d",&n);
    nn=n;
    mm=n;
    while(n>0){
        l++;
        n/=10;
    }
    for (int i=l-1;i>=0;i--){
        m=nn%10;
        s+=m*pow(10,i);
        nn/=10;
    }
    printf("%d",s);
    if(mm==s)
    printf("Polindrome");
    else
    printf("Not");

    return 0;
}
