//GP1.c
#include<stdio.h>
int main (){
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	int a=1;
	for(int i=1;i<=n;i++)
	{
		printf("%d\t",a);
		a=a*2;
	}
	return 0;
}