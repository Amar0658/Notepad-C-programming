#include <stdio.h>
int main ()
{	void India ();
	India ();  //calling India
return 0;
}

void Aust ()
{	void USA ();
	printf("This is Australia\n");
	USA ();  //calling USA
}
void India ()
{	void Aust ();
	printf("This is India, Mother of Democracy\n");
	Aust (); //calling Aust
}
void USA ()
{	printf("this is America");}
