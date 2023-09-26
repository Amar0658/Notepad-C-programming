//sum_parametrised.c
#include <stdio.h>
void sum(int n,int s){
	if (n==0) 
	{
		printf("%d",s);
		return;
	}
	sum (n/10,s+n%10);
}
int main () {
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	sum(n,0);
	return 0;
}




/*
#include <stdio.h>
int sum(int n){
	int r=0;
	while(n>0)
    {
		int i=n%10;
		r=i+r;
		n=n/10;
	}
	printf("%d",r);
	return 0;
}
int main () {
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	sum(n);
	return 0;
}
*/