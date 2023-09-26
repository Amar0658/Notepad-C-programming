/*
print_1_to_n.c
#include <stdio.h>
int increasing(int x,int n){
	if (x>n) return 0;
	printf("%d\n",x);
	return increasing (x+1,n) ;
}
int main (){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	increasing(1,n);
	return 0;
}
*/
#include<stdio.h>
#include<math.h>
int main ()
{  
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
	if (n==1)
		printf("Neither a prime no. not a composite no.");
    if (n==2)
    printf("Prime Number");
    if (n>=3)
    {   int a;
        for (int i=2;i<=n;i++)
        {
			for (int j=2;j<=sqrt(n);j++)
			{
				if (i%j==0) a=0;
				else 
				{a=1;}
			}
		}
		if (a==0)
			printf("Not a Prime Number");
		else
		{
			printf("Prime Number");
		}
    }    
return 0;
}
