//WAP_to_print_primeno.c
#include<stdio.h>
int main (){
	int  n;
	printf ("Enter a number: ");
	scanf("%d",&n);
	if (n==2)
		printf("%d",2);
	if (n>=3)
	{
		printf("%d\t",2);
		int a;
		for(int i=3;i<n;i++)
		{
			for(int j=2;j<i;j++)
			{
				if (i%j == 0)
				{	
					a=0;
					break;
				}
			
				else
				{a=1;}
			}
			if (a!=0)
				printf("%d\t",i);
		}
	}
	return 0;
}