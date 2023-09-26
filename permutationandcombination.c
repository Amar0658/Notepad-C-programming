#include<stdio.h>
int fact (int n)
{
    int fac=1;
    for (int i=1;i<=n;i++)
    {
        fac=fac*i;
    }
return fac;
}
int main ()
{  
    int n,r;
    printf("Enter Two Numbers: ");
    scanf("%d%d",&n,&r);
    int ncr = fact(n)/(fact(r)*(fact(n-r)));
    printf("ncr = %d\n",ncr);
    int npr = fact(n)/fact(n-r);
    printf("npr = %d",npr);
    return 0;
}