#include <stdio.h>
#include <math.h>
#include <locale.h>
int calculo(int *pbase, int *pexpo);

int main (){
	setlocale(LC_ALL, "portuguese");
	printf ("\t\t\t===============================\n");
	printf ("\t\t\t\tP O T Ê N C I A\n");
	printf ("\t\t\t===============================\n");
	int base, expo;
	printf ("Digite a Base: ");
	scanf ("%d", &base);
	printf ("Digite o Expoente: ");
	scanf ("%d", &expo);
	
	int *pbase=&base;
	int *pexpo=&expo;
	calculo(pbase, pexpo);
}

int calculo(int *pbase, int *pexpo){
	setlocale(LC_ALL, "portuguese");
	int result;
	result= pow(*pbase, *pexpo);
	printf ("O Resultado é: %d", result);
}
