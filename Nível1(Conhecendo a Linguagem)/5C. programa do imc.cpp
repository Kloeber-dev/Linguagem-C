#include<stdio.h>
#include<conio.h>

int main ()
{
	float m, a, imc;
	printf("Digite a massa em kg: ");
	scanf("%f", &m);
	printf("Digite a altura em m:");
	scanf("%f", &a);
	imc=m/(a*a);
	printf("O IMC resultante eh: %.3f", imc);
	
	getch();
	return 0;
}
