#include<stdio.h>
#include<string.h>
main(){
int i,j,l;
char s[20],t;
printf("Enter the string : ");
scanf("%s",&s);
l=strlen(s);
for (i=0;i<l;i++){
    for (j=i+1;j<l;j++){
        if(s[i]>s[j]){
            t=s[i];
            s[i]=s[j];
            s[j]=t;
        }
    }
}
printf("%s",s);
}
