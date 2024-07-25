#include <stdio.h>

int main()
{
    int nums[]={0,0,1,1,1,2,2,3,3,4},numsSize=10;
    int m=numsSize-1;
    for(int i=0;i<numsSize-1;i++){
        for(int j=0;j<numsSize-1;j++){
            if(nums[i]==nums[j]){
                for(int l=i;l<numsSize;l++){
                    nums[l]=nums[l+1];
                }
                nums[m--]=0;
                numsSize--;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",nums[i]);
    }
    return 0;
}