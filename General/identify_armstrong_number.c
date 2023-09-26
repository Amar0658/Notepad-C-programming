#include <stdio.h>
#include <math.h>
int main (){
	int n; 
	printf("Enter a Number : ");
	scanf("%d",&n);
	int k=n;
	int m=n;
	int p=0;
	for (int i=1;n>0;i++)
	{
		n=n/10;
		p++;
	}
	int arm=0;
	for (int i=1;m>0;i++)
	{
		int a=m%10;
		arm=arm + pow(a,p);
		m=m/10;
	}
	if (arm==k)
		printf("Armstrong Number");
	else
	{
		printf("Not a Armstrong Number");
	}
	return 0;
}