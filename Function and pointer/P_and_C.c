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
int main ()
{
	int n,r;
	printf("Enter two Number: ");
	scanf("%d%d",&n,&r);
	printf("ncr = %d\nnpr = %d",f(n)/(f(r)*f(n-r)),f(n)/f(n-r));
	return 0;	
}