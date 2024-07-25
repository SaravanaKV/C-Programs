#include<stdio.h>;
main(){
    int i,j,c,r,sum=0;
    printf("Enter the number of row : ");
    scanf("%d",&r);
    printf("Enter the number of col : ");
    scanf("%d",&c);
    int a[r][c];
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            printf("Enter the value for a%d%d ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
                if(i==j)
                    sum+=a[i][j];
        }
    }
    printf("%d",sum);
}
