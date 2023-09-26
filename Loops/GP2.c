//GP2.c
#include<stdio.h>
int main (){
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	float a=100;
	for(int i=1;i<=n;i++)
	{
		printf("%f\t",a);
		a=a/2;
	}
	return 0;
}