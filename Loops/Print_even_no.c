//Print_even_no.c
#include<stdio.h>
int main (){
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int a=i*2;
		printf("%d\t",a);
	}
	return 0;
}

/*
#include<stdio.h>
int main (){
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if (i%2==0)
		printf("%d\t",i);
	}
	return 0;
}
	
	
#include<stdio.h>
int main (){
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	for(int i=2;i<=n;i=i+2)
	{
		printf("%d\t",i);
	}
	return 0;
}
*/