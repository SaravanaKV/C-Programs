#include <stdio.h>
#include<string.h>
int main()
{   char s[50];
    scanf("%s",s);
    int l=strlen(s),j=0,k;
    for(int i=0;i<l;i++){
        if(s[i]=='*'){
        j=i;
        while(j<l){
            s[j-1]=s[j+1];
            j++;
        }
        i-=2;
        l-=2;
        }
    }
    printf("%s",s);

    return 0;
}