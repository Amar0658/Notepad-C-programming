#include <stdio.h>
int main ()
{
    int i=3;
    int *j;
    int **k;
    j=&i;
    k=&j;
    printf("%u\n",&i);  //address of i
    printf("%u\n",j);   // address of i
    printf("%u\n",*k);   //address of i
    printf("%u\n",&j);   //address of j
    printf("%u\n",k);    //address of j
    printf("%u\n",&k);   //address of k
    printf("%u\n",j);    //address of i
    printf("%u\n",k);   //address of j
    printf("%d\n",i);   //value of i
    printf("%d\n",*(&i));   //value at the address of i or value of i
    printf("%d\n",*j);   //
    printf("%d",**k);
    return 0;
}