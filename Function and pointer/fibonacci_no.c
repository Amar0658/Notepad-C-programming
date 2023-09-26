//fibonacci_no.c
#include<stdio.h>
int fibb (int n)
{
	int a=0, b=1, s=0;
	for (int i=1;i<=n;i++)
	{	printf("%d ",s);
		s=a+b;
		p=s+p;
	}
}
int main ()
{
	int n=10;
	int fib = fibb(n);
	printf("%d",fibb);
	return 0;
}