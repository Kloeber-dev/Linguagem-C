#include <stdio.h>
#include <conio.h>

int main ()
{
	int a, b;
	a=1;
	b=0;
	do
	{
		b=a+b;
		a=a+1;
	 } 
	while(a<=100);
	printf ("%d \n", b);
	getch ();
	return 0;
}

