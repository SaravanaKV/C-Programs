#include<stdio.h>
main(){
    int n,sumo=0,sume=0;
    printf("enter the number : ");
    scanf("%d",&n);
    int ar[n];
    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        if(i%2==0)
            sume=sume+ar[i];
        else
            sumo+=ar[i];
    }
    printf("Sum of odd number is %d \n",sumo);
    printf("Sum of Even number is %d",sume);
}
