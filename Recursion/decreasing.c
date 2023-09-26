//decreasing.c
#include <stdio.h>
void decreasing(int n){
	if (n==0) return;
	printf("Good morning\n");
	decreasing (n-1);
	return;
}
int main (){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	decreasing(n);
	return 0;
}