#include<stdio.h>
#include<conio.h>

int main ()
{
	int n, x;
	printf ("O Valor De N eh: ");
	scanf ("%d", &n);
	if (n<0)
	{
	x=(n*-1);
	}
	else x=n;
	printf ("O Valor do Modulo Deste Numero eh: %d", x);
	
	getch ();
	return 0;
}

