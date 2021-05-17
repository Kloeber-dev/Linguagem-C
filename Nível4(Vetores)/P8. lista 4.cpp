#include<stdio.h>
#include<conio.h>

int main ()
{
	int a;
	printf ("Digite o Numero do Mes: ");
	scanf ("%d", &a);
	switch (a)
	{
		case 1: printf ("Voce digitou, %d, Janeiro!", a); break;
		case 2:	printf ("Voce digitou, %d, Fevereiro!", a); break;
		case 3:	printf ("Voce digitou, %d, Marco!", a); break;
		case 4:	printf ("Voce digitou, %d, Abril!", a); break;
		case 5:	printf ("Voce digitou, %d, Maio!", a); break;
		case 6:	printf ("Voce digitou, %d, Junho!", a); break;
		case 7:	printf ("Voce digitou, %d, Julho!", a); break;
		case 8:	printf ("Voce digitou, %d, Agosto!", a); break;
		case 9:	printf ("Voce digitou, %d, Setembro!", a); break;
		case 10: printf ("Voce digitou, %d, Outubro!", a); break;
		case 11: printf ("Voce digitou, %d, Novembro!", a); break;
		case 12: printf ("Voce digitou, %d, Dezembro!", a); break;
		default: printf ("Nao Corresponde a Nenhum Mes!");
	}
	getch ();
	return 0;
}

