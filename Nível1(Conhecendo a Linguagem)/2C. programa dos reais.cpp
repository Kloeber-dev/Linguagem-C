#include<stdio.h>
#include<conio.h>

int main ()
{
	float Dolar, rl;
	printf("Digite o valor em Dolares para a conversao:");
	scanf("%f", &Dolar);
	rl=Dolar*2.40;
	printf("O valor em reais eh: %.2f", rl);
	
	getch();
	return 0;
}
