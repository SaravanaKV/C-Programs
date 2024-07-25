#include<stdio.h>
main(){
int i,j,temp,n,k;
printf("Enter the number of element you want in an array : ");
scanf("%d",&n);
int a[n];
for (i=0;i<n;i++){
    printf("Enter the value %d ",i+1);
    scanf("%d",&a[i]);
}
for (i=0;i<n;i++){
    for (j=i+1;j<n;j++){
        if(a[i]==a[j]){
            for (k=j;k<n-1;k++){
                a[k]=a[k+1];
            }
            n--;
            j--;
        }
    }
}
printf("After deletion of duplicate element : ");
for (i=0;i<n;i++){
    printf("%d ",a[i]);
}
}

