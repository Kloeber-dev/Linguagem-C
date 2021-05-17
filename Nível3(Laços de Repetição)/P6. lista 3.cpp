#include <stdio.h>
#include <conio.h>

int main ()
{
	int a, b;
	a=15;
	do 
	{
		b=a*a;
		printf ("%d \n", b);
		a++;
	}
	while (a<=200);
	
 	getch ();
	return 0;
}

