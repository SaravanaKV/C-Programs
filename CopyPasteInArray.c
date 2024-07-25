#include<stdio.h>
main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int ar[n],arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        arr[i]=ar[i];
    }
    for (int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
