//Print_sum_from_1_to_n.c
#include <stdio.h>
void sum(int n){
	static int i=0;
	i=i+n;
	if (n==1)
	{	printf("%d",i);
		return;
	}
	sum (n-1);
}
int main () {
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	sum(n);
	return 0;
}



/*#include <stdio.h>
void sum(int n,int s){
	if (n==0) 
	{
		printf("%d",s);
		return;
	}
	sum(n-1,s+n);
}
int main () {
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	sum(n,0);
	return 0;
}
*/