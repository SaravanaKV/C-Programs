#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    scanf("%s",s);
    int dp[26];
    int l=strlen(s);
    for(int i=0;i<l;i++){
        dp[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(dp[i]>1){
        printf("Not an Isogram");
        return 0;
        }
    }
    printf("Isogram");
    
    return 0;
}