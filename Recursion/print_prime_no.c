//print_prime_no.c
#include<stdio.h>
int main ()
{  
    int n,i;
    printf("Enter a Number: ");
    scanf("%d",&n);
	if (n==1)
		printf("Neither a prime no. not a composite no.");
    if (n==2)
    printf("Prime Number");
    if (n>=3)
    {   int a;
        for (i=3;i<n;i++)
        {
			for (int j=2;j<i;j++)
				
			{
				if (i%j==0) 
				{a=0;
				break;
				}
				else
				{a=1;}
			}
			
        }
		if (a!=0)
        printf("%d",i);
      
    }    
return 0;
}