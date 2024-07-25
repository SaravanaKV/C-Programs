/*1.Non Repeating Element in an array in
2.Removing Duplicate element in an Array
3.Move all negative elements to one side of the array  in C
*/
#include <stdio.h>
int main()
{
    int n,f;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        f=1;
        for (int j=i+1;j<n;j++){
            if(a[i]==a[j]){
            a[j]=-1;
            f=0;
        }
        if(f==0)
        a[i]=-1;
    }
    }
    for (int i=0;i<n;i++){
        if(a[i]!=-1)
        printf("%d ",a[i]);
    }
    return 0;
}