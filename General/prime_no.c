//prime_no.c
#include<stdio.h>
#include<math.h>
int main ()
{  
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
 
    int a;
        for (int i=3;i<n;i++)
        {   for (int j=2;j<i;j++)
            {
            if(i%j==0)
            {a=0;
            break;  }    
            else
            {a=1;}
            }
			if (a==0)
        printf("%d",i);
        } 
return 0;
}