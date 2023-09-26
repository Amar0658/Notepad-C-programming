#include <stdio.h>
int main ()
{	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n/2;i++)
	{
		for(int j=1;j<=1;j++)
		{
			printf("*");
		}
		
		for (int j=1;j<=i;j++)
		{
			if(j==i && i<=n/2)
				printf("*");
			else
			{printf(" ");}
		}
		for (int j=1;j<=n/2;j++)
		{
			if (i==n/2+1 && j==n/2)
				printf("*");
			else
			{printf(" ");}
		}
		
		printf("\n");
	}
return 0;
}