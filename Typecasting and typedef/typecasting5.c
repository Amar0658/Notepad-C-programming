//typecasting5.c
#include <stdio.h>
void main (){
	float *p;
	char ch =165;
	p=(float*)&ch;
	printf("%f",*p);

}