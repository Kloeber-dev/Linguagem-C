#include<stdio.h>
#include<conio.h>

int main()
{
	float a, b, c;
	printf("Digite o valor A: ");
	scanf("%f", &a);
	printf("Digite o Valor de B: ");
	scanf("%f", &b);
	c=a;
	a=b;
	b=c;
	printf("Novo Valor de A: %.2f", a);
	printf("\nNovo valor de B: %.2f", b);
	
	getch();
	return 0;
}

