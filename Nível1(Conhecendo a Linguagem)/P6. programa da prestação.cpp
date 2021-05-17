#include<stdio.h>
#include<conio.h>

int main ()
{
	float pa, pv, taxa, tempo;
	printf("Digite o Valor da Prestacao: ");
	scanf("%f", &pv);
	printf("Digite o Valor da Taxa de Juros: ");
	scanf("%f", &taxa);
	printf("Digite o Tempo em Atraso: ");
	scanf("%f", &tempo);
	pa=pv+(pv*(taxa/100)*tempo);
	printf("O Valor da Prestacao em Atraso eh: %.3f", pa);
	
 	getch ();
 	return 0;
}

