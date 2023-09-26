//typedef1.c
#include <stdio.h>
int main  ()
{
	typedef int myint;
	typedef char mychar;
	myint a=4;
	mychar c='A';
	printf("%d, %c",a,c);
	return 0;
}
