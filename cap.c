#include<math.h>
#include <stdio.h>

int main()
{
    int n,m,l=0,s,s1,p;
    scanf("%d",&n);
    m=n*n;
    p=n;
    while(n>0){
        l++;
        n/=10;
    }
    s=pow(10,l);
    s1=(m%s)+(m/s);
    if(p==s1)
    printf("Kaprekar Number");
    else
    printf("Not a Kaprekar Number");
}
