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
            if(i==j || j==l/2 || i+j==l-1 )
            printf("%c",s[i]);
            else if(i==l/2)
            printf("%c",s[j]);
            else
            printf(" ");
        }
        printf("\n");
        
    }
    
    return 0;
}