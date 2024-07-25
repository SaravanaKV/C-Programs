#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int dp[26],l,c=0;
    scanf("%s",s);
    l=strlen(s);
    for(int i=0;i<l;i++){
        dp[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(dp[i]==0){
            printf("Not a Panagram");
            return 0;
        }
    }
    printf("panagram");
    
    return 0;
}