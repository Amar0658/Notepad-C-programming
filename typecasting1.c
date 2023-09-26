//typecasting1.c
#include <stdio.h>
int main() {
   int a = 10;
   char b = 'S';
   float c = 2.88;
   a = a+b;
   printf("Implicit conversion from character to integer : %d
",a);
   c = c+a;
   printf("Implicit conversion from integer to float : %f
",c);
   return 0;
}
