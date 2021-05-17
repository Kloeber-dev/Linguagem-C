#include<stdio.h>
#include<conio.h>

int main ()
{
	int curso;
	printf ("Digite o Numero do Curso: ");
	scanf ("%d", &curso);
	switch (curso)
	{
		case 1: printf ("Voce Digitou %d, Engenharia!", curso); break;
		case 2: printf ("Voce Digitou %d, Edificacoes!", curso); break;
		case 3: printf ("Voce Digitou %d, Sistemas Eletricos!", curso); break;
		case 4: printf ("Voce Digitou %d, Turismo!", curso); break;
		case 5: printf ("Voce Digitou %d, Analise de Sistemas!", curso); break;
		default: printf ("Opcao Invalida!!!");
	}
	getch ();
	return 0;
}

