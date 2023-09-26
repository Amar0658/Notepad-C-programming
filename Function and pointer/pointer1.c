#include <stdio.h>
int main (){
	int a=4;
	int *x;
	x=&a;
	int **y;
	y=&x;
	int ***z;
	z=&y;
	printf("%d\n",a);
	printf("%p\n",x);
	printf("%p\n",y);
	printf("%p\n",z);
	printf("%d\n",*x);
	printf("%d\n",**y);
	printf("%d\n",***z);
	return 0;
}