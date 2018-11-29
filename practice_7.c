#include<stdio.h>
int add(int a,int b){return a+b;}
int minus(int a,int b){return a-b;}

int multiply(int a,int b){
	return a*b;
}
int divide(int a,int b){
	return a/b;
}

int nothing(int a,int b){return 0;}
int main(){
    int a=5,b=10;
    int (*operation)(int,int)=nothing;
    switch(getchar()){
        case '+': operation=add;   break;
        case '-': operation=minus; break;
        case '*': operation=multiply; break;
        case '/': operation=divide; break;
    }
    printf("%d",operation(a,b));
    return 0;
}
