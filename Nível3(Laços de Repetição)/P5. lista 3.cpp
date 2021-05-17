#include <stdio.h>
#include <conio.h>

int main ()
{
	int a;
	a=1;
	while (a<200)
	{
		if (a%4==0)
		printf ("%d \n", a);
		a++;
	}
	getch ();
	return 0;
}

