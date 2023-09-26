//normal2.c
#include<stdio.h>
int amar (int n){
	return n+1;
}
int main (){
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int a = amar ();
	printf("%d",a);
	return 0;
}