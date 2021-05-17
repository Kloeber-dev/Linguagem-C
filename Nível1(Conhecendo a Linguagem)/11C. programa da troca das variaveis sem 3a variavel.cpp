#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b;
	printf("Digite o valor A: ");
	scanf("%d", &a);
	printf("Digite o Valor de B: ");
	scanf("%d", &b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Novo Valor de A: %d", a);
	printf("\nNovo valor de B: %d", b);
	
	getch();
	return 0;
}

