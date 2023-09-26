//sum_of_series.c
#include <stdio.h>
void sum(int n,int s){
	if (n==0) 
	{printf("%d",s);	
	return;}
	sum (n-1, s+n);
}
int main (){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	sum(n,0);
	return 0;
}
	
	/*
#include <stdio.h>
int sum(int n){
	if (n==0)
	return 0;
	static int i=0;
	i = i+n;
	sum (n-1);
	printf("%d",i);
}
int main (){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	sum(n);
	return 0;
}
*/