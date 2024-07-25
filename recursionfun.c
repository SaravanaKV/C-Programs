#include<stdio.h>
int i=0;
int fun(int a)
{
    i++;
    if(a>99)
        return a-12;
    return fun(fun(a+25));
}
void main()
{
    printf("%d ",fun(69));
    printf("%d",i);
}