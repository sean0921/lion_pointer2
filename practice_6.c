#include<stdio.h>
#include<string.h>
    
int main(){
    char mac[20]="00:0C:29:01:98:27";
    char *out=strtok(mac,":");//第一次切
    while(out!=NULL){        //切到沒東西
        puts(out);
        out=strtok(NULL,":");//再切
    }      
    return 0;
}
