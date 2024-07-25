#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n/2;i++){
        if(n==i*i){
        printf("Perfect S");
        return 0;
        }
    }
    printf("Not");
    return 0;
}
