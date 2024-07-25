#include <stdio.h>

int main()
{
    int nums[]={0,1,2,2,3,0,4,2};
    int numsSize=8,val=2,m=numsSize-1;
        for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]==val){
                for(int k=i;k<numsSize;k++){
                    nums[k]=nums[k+1];
                }
                numsSize--;
            }
        }
    }
    for(int i=0;i<numsSize;i++){
        printf("%d ",nums[i]);
    }
}

