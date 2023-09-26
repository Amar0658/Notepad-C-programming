#include <stdio.h>
#include <math.h>
int main (){
	int n; 
	printf("Enter a Number : ");
	scanf("%d",&n);
	int k=n;
	int m=n;
	int p=0;
	int arm=0;
	for (int i=1;i<=n;i++)
	{	
		for (int i=1;m>0;i++)
		{
			p++;
			m=m/10;
		}
		int a=i%10;
		arm=arm + pow(a,p);
		if (arm==k)
		printf("%d",arm);
	}
	/*if (arm==k)
		printf("Armstrong Number");
	else
	{
		printf("Not a Armstrong Number");
	}*/
	return 0;
}