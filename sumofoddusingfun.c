#include <stdio.h>


int SumOddIntegers(int n){
    int a[n],s=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        if(a[i]%2==1)
        s+=a[i];
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",SumOddIntegers(n));
    return 0;
}