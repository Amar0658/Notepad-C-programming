//pointerg1.c
#include <stdio.h>
void main(){
	int *p;
	int a[5]={10,20,30,40,50};
	p = &a[0];
	p++; // but a++ is not valid
	printf("%d",*p);
}