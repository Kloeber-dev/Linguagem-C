#include <stdio.h>
#include <math.h>
#include <locale.h>

int potencia(int base, int expo);
int main(){setlocale(LC_ALL, "portuguese");
	printf ("\t\t\t===============================\n");
	printf ("\t\t\t\tP O T Ê N C I A\n");
	printf ("\t\t\t===============================\n");
	int base, expo;
	printf("Digite o Valor da Base: ");
	scanf ("%d", &base);
	printf ("Digite o Valor do Expoente: ");
	scanf ("%d", &expo);
	potencia(base, expo);
}

int potencia(int base, int expo){
	setlocale(LC_ALL, "portuguese");
	int pot=pow(base, expo);
	printf ("O Valor da Potência é: %d", pot);}

