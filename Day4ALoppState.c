#include<stdio.h>
main(){
int num,r,revnum=0,p=2;
printf("Enter the number : ");
scanf("%d",&num);
int n=num;
while(num>0){
    r=num%10;
    revnum+=r*(pow(10,p));
    p-=1;
    num/=10;
}
if (n==revnum)
    printf("%d is a palidrome ",n);
else
    printf("%d is not a palindrome ",n);
}
