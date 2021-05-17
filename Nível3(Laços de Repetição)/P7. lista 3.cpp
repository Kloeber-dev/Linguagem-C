#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int a=3, b=0, c;
	do 
	{
		c=pow (a, b);
		printf ("%d \n", c);
		b++;
	}
	while (b<=15);
	
 	getch ();
	return 0;
}

