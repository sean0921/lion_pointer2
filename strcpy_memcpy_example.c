#include<stdio.h>
#include<string.h>

int main(){
    char s[20]={"9487 \0 94crazy \n"};
    char s1[20],s2[20];
    memcpy(s1,s,sizeof(s1));
    strcpy(s2,s);
    for(int i=0;i<20;++i) putchar(s1[i]);
    for(int i=0;i<20;++i) putchar(s2[i]);
    return 0;
}
