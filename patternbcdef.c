
#include <stdio.h>

int main()
{
    int n,c=66,s=98;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if(i%2==0){
        printf("%c ",s++);
        c++;
        }
        else{
        printf("%c ",c++);
        s++;
    }
    }

    return 0;
}
