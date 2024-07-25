#include<stdio.h>
main(){
int n;
printf("Enter the number : ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for (int j=1;j<=i;j++){
        printf("%c",96+j);
    }
    printf("\n");
}
}

