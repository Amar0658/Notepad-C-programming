//typecasting4.c
#include <stdio.h>
void main (){
	int *p;
	char ch =165;
	p = (int*)&ch;
	printf("%d",*p);

}