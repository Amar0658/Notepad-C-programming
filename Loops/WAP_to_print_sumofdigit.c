//WAP_to_print_sumofdigit.c
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
		a=a+i;
		n=n/10;
	}
	printf("%d",a);
	return 0;
}