#include <stdio.h>

int main(void) {
    int array[10];
    array[1]=5566;

    printf("%d %d %d %d\n",array[1],*(array+1), *(1+array), 1[array]);
    return 0;
}
