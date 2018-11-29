#include<stdio.h>

void binary(void *p,long unsigned size);
    
int main(){
    int a=509;
    double b=8787;
    char c[15]={"what the park!"};
    binary(&a,sizeof(a));
    binary(&b,sizeof(b));
    binary(&c,sizeof(c));
    return 0;
}

void binary(void *p,long unsigned size){
    char *byte_p=p,tmp;
    while(size--){
        tmp=byte_p[size];
        for(int i=0;i<8;++i){
            printf("%d",tmp<0);
            tmp<<=1;
        }
    }
    printf("\n");
}
