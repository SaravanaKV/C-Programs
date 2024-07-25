#include <stdio.h>

int main()
{
    int n,f=0;
    scanf("%d",&n);
    printf("0 1 ");
    for (int j=2;j<=n;j++){
        f=0;
    for (int i=2;i<j;i++){
        if(j%i==0){
        f=1;
        break;
            
        }
    }
    if(f==0)
    printf("%d ",j);
    }
}