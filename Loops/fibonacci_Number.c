//fibonacci_Number.c
#include <stdio.h>
void main (){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a=1, b=1;
    for(int i=1;i<=n;i++)
    {
        printf("%d\t",a);
        int s = a+b;
        a=b;
        b=s;
    }
    
}