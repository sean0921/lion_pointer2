#include<stdio.h>
int main(){
    int a=509;
    int b[20];
           
    int *pa=&a;
    int *pb=b;
           
    printf("%ld\n",sizeof(a));
    printf("%ld\n\n",sizeof(b));
    printf("%ld\n",sizeof(pa));
    printf("%ld\n",sizeof(pb));
    return 0;
}
