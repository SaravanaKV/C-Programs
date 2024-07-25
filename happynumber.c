#include <stdio.h>

int main()
{
    int n,s=0,rem;
    scanf("%d",&n);
    while(n>0 || s>9){
        if(n==0){
            n=s;
            s=0;
        }
        rem=n%10;
        s=s+rem*rem;
        n/=10;
    }
    if(s==1)
    printf("Happy Number");
    else
    printf("Not a happy number");
    return 0;
}