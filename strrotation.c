#include <stdio.h>
#include<string.h>
int main()
{
    int n,l,i;
    char s[50];
    scanf("%s",s);
    scanf("%d",&n);
    l=strlen(s);
    int t;
    for(i=0;i<n;i++){
        t=s[i];
        s[i]=s[l-n+i];
        s[l-n+i]=t;
    }
    for(i=0;i<l;i++){
        printf("%c",s[i]);
    }
    return 0;
}