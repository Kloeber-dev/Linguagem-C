#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int base, expo, cont, result;
	printf ("Digite o Valor da Base: ");
	scanf ("%d", &base);
	printf ("Digite o Valor do Expoente: ");
	scanf ("%d", &expo);
	
	result = 1;
	cont = 0;
	while (cont!=expo)
	{
		result = result*base;
		cont++;
	}
	
		printf ("A potencia de base %d, e expoente %d, eh %d \n", base, expo, result);
 	getch ();
	return 0;
}

