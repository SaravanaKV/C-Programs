#include<stdio.h>
#include<math.h>
void main(){
    int n,i=0,s[50];
    scanf("%d",&n);
    while(n>1){
        s[i]=n%2;
        n=n/2;
        i++;
    }
    s[i]=n;
    for (int j=i;j>=0;j--)
    printf("%d",s[j]);
}