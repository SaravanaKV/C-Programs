#include<stdio.h>
void main(){
    int sodd,seven;
for (int i=1;i<=100;i++){
    if (i%2==0)
        seven=seven+i;
    else
        sodd+=i;

}
printf("%d  %d",seven,sodd);
}
