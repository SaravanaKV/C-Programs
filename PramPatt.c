#include<stdio.h>
main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int s=1;s<=i;s++){
             printf("  ");
        }
        for(int j=i;j<=n;j++){
            printf("* ");

        }
        for(int j=i+1;j<=n;j++){
            printf("* ");

        }
        printf("\n");
    }
}
