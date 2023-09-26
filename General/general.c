//genaral.c
#include <stdio.h>
#include <math.h>
int main ()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	long long int p=0;
	for (int i=0;i<=n;i++)
	{
		p=p + pow(2,i);
	}
	printf("%d",p);
	return 0;
}