//typecasting7.c
#include <stdio.h>
void main (){
	void *ptr;
	int i = 16;
	char ch =16;
	ptr = &i;
	ptr = &ch;
	printf("%c",*(char*)ptr); // can fix it using *(char*)ptr at place of *char.
}