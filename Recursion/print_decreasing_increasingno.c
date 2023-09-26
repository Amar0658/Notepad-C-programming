//print_decreasing_increasingno.c
#include <stdio.h>
void decinc (int n){
    printf("%d",n);
	if (n>1) 
	decinc (n-1);
	printf("%d",n);
	return;
}
int main () {
	int n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	decinc(n);
	return 0;
}