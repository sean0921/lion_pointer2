#include<stdio.h>
#include<string.h>

int main(){
	char a[20]="a string";
	char *b="b string";
	strcat(a," can change\n");
	printf("%s",a);
	//strcat(b," can change\n");//Segmentation fault
	printf("%s",b);
	return 0;
}
