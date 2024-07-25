#include<stdio.h>
main(){
    char s[100];
    printf("Enter the string : ");
    scanf("%s",&s);
    for (int i=0;s[i]!='\0';i++){
            s[i]=s[i]-32;
    }
    printf("%s",s);

}
