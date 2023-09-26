//WAP_to_print_reverse.c
#include<stdio.h>
int main ()
{
	int  n;
	printf ("Enter a number: ");
	scanf("%d",&n);
	int a=0;
	while(n>0)
	{
		int i=n%10;
		n=n/10;
		a=a*10+i;
	}
	printf("%d",a);
	return 0;
}            