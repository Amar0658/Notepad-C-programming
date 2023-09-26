#include <stdio.h> 
int min (int a , int b)
{
	if (a<b) return a;
	else return b;
}

int gcd (int a,int b)
{
	int h;
	for (int i=1; i<=min(a,b);i++)
	{
		if (a%i==0 && b%i==0)
			h=i;
	}
	return h;
}
int main (){
	int a,b;
	printf("Enter the two numbers: ");
	scanf("%d%d",&a,&b);
	int h=gcd(a,b);
	printf("the HCf of %d and %d is %d", a,b,h);
	return 0;
}
				
		
	