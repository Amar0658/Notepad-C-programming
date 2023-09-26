//Sum_using_return.c
#include <stdio.h>
void sum(int n){
	if (n%10<0) return;
	int i=n%10;
	static int r=0;
	r=r+i;
	n=n/10;
	sum(n);
}
int main () {
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	sum(n);
	return 0;
}
