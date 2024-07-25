#include <stdio.h>
#include<math.h>
int main()
{
    int n,m,c=0,c1=0,r,j,k,rem2;
    scanf("%d%d%d",&n,&m,&r);
        for(int i=1;i<=r;i++){
            j=i;
            k=i;
            c=0;
            while(j>0){
            c++;
            j/=10;
            }
            c1=0;
            while(k>0){
                rem2=k%10;
                if(rem2==n || rem2==m)
                c1++;
                k/=10;
                
            }
            if(c==c1)
            printf("%d ",i);
        }

    return 0;
}
