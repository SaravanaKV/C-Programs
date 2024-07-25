#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int dp[26],l;
    scanf("%s",s);
    l=strlen(s);
    for(int i=0;i<l;i++){
        dp[s[i]-97]++;
    }
    for(int i=0;i<26;i++)
        printf("%d ",dp[i]);
    return 0;
}