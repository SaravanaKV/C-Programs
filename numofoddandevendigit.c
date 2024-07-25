#include <stdio.h>

int main()
{
    int num,rem,oddCount=0,evenCount=0;
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        if(rem%2==0)
        evenCount++;
        else
        oddCount++;
        num/=10;
    }
    printf("%d\n%d",oddCount,evenCount);
    return 0;
}