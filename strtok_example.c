#include<stdio.h>
#include<string.h>
    
int main(){
    char IP[20]="140.116.246.146";
    char *out=strtok(IP,".");//第一次切
    while(out!=NULL){        //切到沒東西
        puts(out);
        out=strtok(NULL,".");//再切
    }      
    return 0;
}
