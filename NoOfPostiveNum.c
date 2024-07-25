#include<stdio.h>
main(){
    int n,c=0;
    printf("enter the number : ");
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        if(ar[i]>0)
            c+=1;
    }
    printf("Number of positive number in an array  is %d \n",c);
}
