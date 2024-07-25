#include<stdio.h>
main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
if(num%3 ==0 && num%5==0)
    printf("Fizz Buzz");
else if(num%3==0)
    printf("Fizz");
else if(num%5==0)
    printf("Buzz");
}
