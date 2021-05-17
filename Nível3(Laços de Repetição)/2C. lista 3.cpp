#include<stdio.h>
#include<conio.h>

int main ()
{
	int a;
	a=20;
	while (a>=1)
	{
		if (a%2==0)
		{
			printf ("%d \n" , a);
		}
		
		a--;
	}
	getch ();
	return 0;
}

