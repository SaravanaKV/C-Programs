#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%s",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%s",&b[i]);
    }
    printf("The common elements are ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                printf("%c ",a[i]);
                break;
            }
        }
    }
    return 0;
}