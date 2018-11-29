#include <stdio.h>

int main(void) {
    int a=509;
    int b[20];
           
    int *pa=&a;//指向a的指標
    int *pb=b;//指向b的指標

    printf("%d %d %d %d\n",a,b,pa,pb);
    return 0;
}
