#include <stdio.h>
int f(int n)
{
	int fact =1;
	for (int i=2;i<=n;i++)
	{
		fact = fact*i;
	}
	return fact;
}
int C(int n, int r)
{
	return f(n)/(f(r)*f(n-r));
}
int main ()
{
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	
	for (int i=0;i<n;i++)
	{	for (int j=1;j<n-i;j++)
		{printf(" ");}
		for (int j=0;j<=i;j++)
			{
				printf("%d ",C(i,j));
			}
		printf("\n");
	}
	
	return 0;	
}