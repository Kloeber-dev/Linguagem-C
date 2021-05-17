#include<stdio.h>
#include<conio.h>
#include <math.h>

int main ()
{
	int a[8], b[8], cont; 
	for (cont=0; cont<8; cont++)
	{
		printf ("Digite os Valores do Vetor A: \n");
		scanf ("%d", &a[cont]);
	}
	for (cont=0; cont<8; cont++)
	{
		b[cont]=a[cont]*a[cont];
		printf ("Os Quadrados sao: %d \n", b[cont]);
	}
	getch ();
	return 0;
}

