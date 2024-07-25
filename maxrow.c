#include <stdio.h>

int main()
{
    int n,m,i,j,max,s,val;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++){
        s=0;
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            s+=a[i][j];
        }
        if(s>max){
            max=s;
            val=i+1;
        }
    }
    printf("%d",val);
    return 0;
}
