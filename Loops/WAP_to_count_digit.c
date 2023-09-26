//WAP_to_count_digit.c
#include<stdio.h>
int main ()
{
	int  n;
	printf ("Enter a number: ");
	scanf("%d",&n);
	int a=0;
	while(n>0)
	{
		a++;
		n=n/10;
	}
	printf("%d",a);
	return 0;
}