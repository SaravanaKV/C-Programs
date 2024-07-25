#include <stdio.h>

int main()
{
    int w;
    scanf("%d",&w);
    if(w>7000)
        printf("INVALID INPUT");
    else if(w>4000)
    printf("Time Estimated : 45 minutes");
    else if(w>2000)
    printf("Time Estimated : 35 minutes");
    else if(w>0)
    printf("Time Estimated : 25 minutes");
    else
    printf("Time Estimated : 0 minutes");
    return 0;
}