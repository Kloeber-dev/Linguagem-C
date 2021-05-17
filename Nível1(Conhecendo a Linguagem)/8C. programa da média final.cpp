#include<stdio.h>
#include<conio.h>

int main()
{
	float n1, n2, n3, n4, m;
	printf("Digite a Nota do Primeiro Bimestre: ");
	scanf("%f", &n1);
	printf("Digite a Nota do Segundo Bimestre: ");
	scanf("%f", &n2);
	printf("Digite a Nota do Terceiro Bimestre: ");
	scanf("%f", &n3);
	printf("Digite a Nota do Quarto Bimestre: ");
	scanf("%f", &n4);
	m=(n1+n2+n3+n4)/4;
	printf("A Media Final eh: %.2f", m);
	
	getch();
	return 0;
}

