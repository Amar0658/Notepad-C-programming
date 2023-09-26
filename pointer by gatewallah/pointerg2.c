//pointerg2.c
#include <stdio.h>
void main (){
	int *p;
	int a[4] = {10,20,30,40};
	p=a;  // same as &a[0]
	p=p+3;
	p--;
	--p;
	printf("%d",*p);
	
}