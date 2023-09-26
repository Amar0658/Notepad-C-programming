#include <stdio.h>
void USA ()
{	printf("this is America");}
void Aust ()
{	printf("This is Australia\n");
	USA ();
}
void India ()
{	printf("This is India, Mother of Democracy\n");
	Aust ();
}
int main ()
{
	India ();
return 0;
}