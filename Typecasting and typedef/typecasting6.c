//typecasting6.c
#include <stdio.h>
void main (){
	void *ptr;
	int i = 16;
	char ch =16;
	ptr = &i;
	printf("%d",*(int*)ptr); // can fix it using *(int*)ptr at place of *ptr.
	ptr = &ch;
	printf("%c",*(char*)ptr); // same as here
}