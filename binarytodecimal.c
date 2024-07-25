#include<stdio.h>
#include<math.h>
void main(){
    int n,l=0,rem,s=0,p;
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        p=pow(2,l);
        s+=(rem*p);
        l++;
        n/=10;
    }
    printf("%d",s);
}