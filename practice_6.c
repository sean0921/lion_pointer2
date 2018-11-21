#include<stdio.h>
#include<string.h>

int main(){
    int a[5]={1,2,3,4,5},b[3];
    memcpy(b,a,sizeof(b));
    for(int i=0;i<3;++i) printf("%d ",b[i]);
    printf("\n");
    return 0;
}
