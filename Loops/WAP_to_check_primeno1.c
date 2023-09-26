//WAP_to_check_primeno1.c
#include<stdio.h>
int main ()
{
	int  n;
	printf ("Enter a number: ");
	scanf("%d",&n);
	if (n==1)
		printf("Neither a even number nor a odd number");
	if (n==2)
		printf("Prime Number");
	if (n>=3)
	{
		int a=1;
		for(int i=3;i<n;i++)
		{
			a=a*(n%i);
			if(a==0)
				break;
		}
		if (a==0)
			printf("Not a Prime Number");
		else
		{
			printf("Prime Number");
		}
	}
	return 0;
}