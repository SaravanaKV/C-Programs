#include<stdio.h>
main(){
int mark1,mark2,mark3,mark4,mark5,total;
printf("Enter the marks in 5 subject : ");
scanf("%d %d %d %d %d",&mark1,&mark2,&mark3,&mark4,&mark5);
total=(mark1+mark2+mark3+mark4+mark5)/5;
printf("Total = %d\n",total);
if (total>=90)
    printf("Your grade is 'O'");
else if (total>=80)
    printf("Your grade is 'A+'");
else if (total>=70)
    printf("Your grade is 'A'");
else if (total>=60)
    printf("Your grade is 'B+'");
else if (total>=50)
    printf("Your grade is 'B'");
else
    printf("You failed");
}

