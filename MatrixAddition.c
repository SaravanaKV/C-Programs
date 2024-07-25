#include<stdio.h>
main(){
int r,c,a[100][100],b[100][100],sum[100][100],i,j;
printf("Enter the rows");
scanf("%d",&r);
printf("Enter the cols");
scanf("%d",&c);
for (i=0;i<r;i++){
    for (j=0;j<c;j++){
        printf("Enter the value of a%d%d : ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}
for (i=0;i<r;i++){
    for (j=0;j<c;j++){
        printf("Enter the value of b%d%d : ",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
}
for (i=0;i<r;i++){
    for (j=0;j<c;j++){
        sum[i][j]=a[i][j]+b[i][j];
    }
}
for (i=0;i<r;i++){
    for (j=0;j<c;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
}
}
