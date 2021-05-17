#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b, c;
	printf("Digite o valor A: ");
	scanf("%d", &a);
	printf("Digite o Valor de B: ");
	scanf("%d", &b);
	c=a;
	a=b;
	b=c;
	printf("Novo Valor de A: %d", a);
	printf("\nNovo valor de B: %d", b);
	
	getch();
	return 0;
}

