//print_1_to_n_to_1.c
#include <stdio.h>
void decinc(int n){
	if (n==0) return;
	printf("%d\t",n);
	decinc (n-1);
	decinc (n-1);
	printf("%d\t",n);
}
int main (){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	decinc (n);
	return 0;
}