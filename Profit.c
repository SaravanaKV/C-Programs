#include <stdio.h>
int main()
{
    int n,cp,sp,cal;
    printf("Enter the value of Number of copies selling price and cost price");
    scanf("%d %d %d",&n,&sp,&cp);
    cal=(sp-cp)*n;
    printf("%d",cal-100);
    int salary,Leave;
    scanf("%d %d",&salary,&Leave);
    int spd=salary%30;
    printf("%d",salary-(spd*Leave));
}