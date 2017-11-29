#include<stdio.h>
void change(int aa,int *bb){//aa接87,bb接記憶體位置
    aa=509;//把aa改成509(aa不是a)
    *bb=9487;//把bb指向的記憶體位置的值改成9487
}
int main(){
    int a=87,b=666;
    printf("%d %d\n",a,b);
    change(a,&b);//a給值,b給址
    printf("%d %d\n",a,b);
    return 0;
}
