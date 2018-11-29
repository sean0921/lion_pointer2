#include<stdio.h>
#include<string.h>

int main(){
    int a[5];
    memset(a,0,sizeof(a));
    for(int i=0;i<5;++i) printf("%d ",a[i]);
    puts("");
    
    memset(a,1,sizeof(a));
    for(int i=0;i<5;++i) printf("%d ",a[i]);
    puts("");
    return 0;
}
