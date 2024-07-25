#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],s1[100];
    int dp[26],l,l1;
    scanf("%s",s);
    scanf("%s",s1);
    l=strlen(s);
    l1=strlen(s1);
    for(int i=0;i<l;i++){
        dp[s[i]-97]++;
    }
    for(int i=0;i<l1;i++){
        dp[s1[i]-97]--;
    }
    for(int i=0;i<26;i++){
        if(dp[i]!=0){
            printf("Not a Anagram");
            return 0;
        }
    }
    printf("Anagram");
    
    return 0;
}