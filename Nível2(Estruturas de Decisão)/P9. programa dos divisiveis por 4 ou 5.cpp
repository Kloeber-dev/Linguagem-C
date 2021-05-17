#include<stdio.h>
#include<conio.h>

int main ()
{
	int n1, n2, n3, n4;
	printf ("Digite Quatro Numeros Inteiros: ");
	scanf ("%d %d %d %d", &n1, &n2, &n3, &n4);
	if ((n1%4==0)||(n1%5==0)||(n2%4==0)||(n2%5==0)||(n3%4==0)||(n3%5==0)||(n4%4==0)||(n4%5==0))
	{
		if ((n1%4==0)||(n1%5==0))
		{
			printf ("Numero divisivel por 4 ou 5: %d", n1);
		}
		if ((n2%4==0)||(n2%5==0))
		{
			printf ("\nNumero Divisivel por 4 ou 5: %d", n2);
		}
		if ((n3%4==0)||(n3%5==0))
		{
			printf ("\nNumero Divisivel por 4 ou 5: %d", n3);
		}
		if ((n4%4==0)||(n4%5==0))
		{
			printf ("\nNumero Divisivel por 4 ou 5: %d", n4);
		}
	}
	else 
		printf ("\nNao Foi Digitado Nenhum Numero Divisivel por 4 ou 5!");
	getch ();
	return 0;
}
