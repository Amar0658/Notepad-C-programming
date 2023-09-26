//WAP_to_check_primeno.c
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
		int a;
		for(int i=3;i<n;i++)
		{
				if (n%i==0) 
				{
					a=0;
					break;
				}
				else
				{a=1;}
			
		}
		if (a==0)
			printf("Not a Prime Number");
		else
		{
			printf("Prime Number");
		}
	}
	return 0;
}*