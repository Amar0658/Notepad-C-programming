//typecasting3.c
//array_pointer1.c
#include <stdio.h>
int main () {
	char *p;
	int x = 400;
	p = (char*)&x;
	printf("%d",*p);
	return 0;
}