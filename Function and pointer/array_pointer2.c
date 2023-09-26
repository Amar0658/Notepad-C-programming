//array_pointer2.c
#include <stdio.h>
int main () {
	char *p;
	int x = 300;
	p = (char*)&x;
	printf("%d",*p);
	return 0;
}