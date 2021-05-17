#include<stdio.h>
#include<conio.h>

int main ()
{
	float rl, Dolar;
	printf("Entre com o valor em reais:");
	scanf("%f", &rl);
	Dolar=rl/2.40;
	printf("O valor em dolares eh: %.2f", Dolar);
	
	getch();
	return 0;
}
