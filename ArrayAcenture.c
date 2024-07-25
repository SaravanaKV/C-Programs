#include <stdio.h>
int main()
{
    int n,k,s=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            if(i<j && a[i]>a[j]){
                s++;
            }
        }
    }
    printf("%d",s);
    return 0;
}
