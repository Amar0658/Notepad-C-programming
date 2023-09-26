//print_n_to_1.c
#include <stdio.h>
int decreasing(int n){
	if (n==0) return 0;
	printf("%d\n",n);
	return decreasing (n-1);
}
int main (){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	decreasing(n);
	return 0;
}

/*
void decreasing(int n){
	if (n==0) return;
	printf("%d\n",n);
	decreasing (n-1);
	return;
}
int main (){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	decreasing(n);
	return 0;
}*/