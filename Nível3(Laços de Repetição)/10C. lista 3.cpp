#include<stdio.h>
#include<conio.h>

int main ()
{
	int x, y, res=0;
	char op;
	char sair;
	printf ("#################### CALCULADORA ####################");
	do{
	printf ("\n\n  Digite a Operacao Desejada    (+, -, *, /) \n\n  Ou Pressione 'S' para Sair \n");
	scanf ("\n%c", &op);
	if (op=='s')
	{
		printf ("Voce pressionou S... \n Fechando CALCULADORA...");
	}
	else {
	printf ("Insira o Primeiro Numero: ");
	scanf ("\n%d", &x);
	printf ("Insira o Segundo Numero: ");
	scanf ("\n%d", &y);
	switch (op)
	{
		case '+': printf ("O Resultado de %d SOMADO COM %d eh: %d \n", x, y, res=x+y); break;
		case '-': printf ("O Resultado de %d SUBTRAIDOO POR %d eh: %d \n", x, y, res=x-y); break;
		case '*': printf ("O Resultado de %d MULTIPLICADO POR %d eh: %d \n", x, y, res=x*y); break;
		case '/': printf ("O Resultado de %d DIVIDIDO POR %d eh: %d \n", x, y, res=x/y); break;
		default: printf ("\n Operação Invalida \n");
	}
	
	}}
	while (op != 's');

	
	
	
	
	getch ();
	return 0;
}

