#include<stdio.h>
main(){
char ch[100]; int c=0;
scanf("%s",ch);
for (int i=0;ch[i];i++){
    if(ch[i]=='a' ||ch[i]=='e' ||ch[i]=='i' ||ch[i]=='o' ||ch[i]=='u')
        c+=1;
}
printf("%d",c);
}
