#include <stdio.h>
#include<string.h>
int main()
{
    int l;
    char s[50];
    scanf("%s",s);
    l=strlen(s);
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            if(i==j || l-1==i+j)
            printf("%c",s[j]);
            else
            printf(" ");
        }
        printf("\n");
        
    }
    
    return 0;
}