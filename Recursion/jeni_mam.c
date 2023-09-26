//jeni_mam.c
#include<stdio.h>
void count (int n){
	printf("%d",37);
	n--;
	if (n>=1)
	count(n-1);
	printf("%d",14);
}
void main() {
	count (5);
	printf("%d",3);
}