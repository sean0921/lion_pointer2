#include<stdio.h>
int main(){
    int input;
    scanf("%d",&input);
    for(unsigned i=0x80000000;i;i>>=1){
        printf("%d",(input&i)? 1:0);
    }
    printf("\n");
    return 0;
}
