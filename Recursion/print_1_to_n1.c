//print_1_to_n1.c
#include <stdio.h>
void increasing (int n){
	if(n==0) return;
	increasing (n-1);
	printf("%d\t",n);
	return;
}
int main (){
	int n;
	printf("Enter a Number :");
	scanf("%d",&n);
	increasing (n);
	return 0;
}