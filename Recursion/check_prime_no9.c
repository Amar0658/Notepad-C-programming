//prime_no.c
#include<stdio.h>
#include<math.h>
int main ()
{  
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    if (n==2)
    printf("Prime Number");
    if (n>=3)
    {   int p=1;
        for (int i=2;i<=sqrt(n);i++)
        {
            int a=n%i;
            p=p*a;
        }
        if (p==0)
        printf("not a Prime Number");
        else
        {printf("Prime Number");}
    }    
return 0;
}