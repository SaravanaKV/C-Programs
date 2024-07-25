#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int pat[n][n];
    for (int row=1;row<=n;row++){
        for (int col=1;col<=row;col++){
            if(row==col|| col==1)
                pat[row][col]=1;
            else
                pat[row][col]=pat[row-1][col-1]+pat[row-1][col];
            printf("%d",pat[row][col]);
        }
        printf("\n");
    }
    return 0;
}
/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/
