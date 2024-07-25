#include<stdio.h>
main(){
int n,ar[]={12,23,34,43,56,67,90};
int f=0;
scanf("%d",&n);
for (int i=0;i<7;i++){
    if (n==ar[i]){
            printf("number %d is found in an array",n);
            f=1;
            break;
}
}
if (f==0)
        printf("number %d in not found",n);
}

