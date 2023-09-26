//factorial_using_func
#include <stdio.h>
int fact(int n){
	int fac = 1;
	for (int i=1;i<=n;i++)
	{
		fac = fac*i;
	}
	return fac;
}
int main ()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int fac = fact (n);
	printf("Factorial of %d is %d",n,fac);
	return 0;
}