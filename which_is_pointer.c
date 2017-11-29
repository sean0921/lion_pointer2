#include<stdio.h>

#define d_pointer int*
typedef int* t_pointer;

int main(){
    int *a=NULL,b=NULL;
    int* c=NULL,d=NULL;
    d_pointer e=NULL,f=NULL;
    t_pointer g=NULL,h=NULL;

    //if it is pointer ,it will have 8 byte,
    //if it is int ,it will have 4 byte
    printf("%lu %lu",sizeof(a),sizeof(b));
    printf("%lu %lu",sizeof(c),sizeof(d));
    printf("%lu %lu",sizeof(e),sizeof(f));
    printf("%lu %lu",sizeof(g),sizeof(h));
    return 0;
}
