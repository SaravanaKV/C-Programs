#include <stdio.h>

int main()
{
    int num,count=0;
    scanf("%d",&num);
    while(num>0){
        count++;
        num/=10;
    }
    printf("%d",count);
    return 0;
}