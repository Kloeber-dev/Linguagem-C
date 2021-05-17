#include<stdio.h>
#include<conio.h>

int main()
{
	float p1, p2, m, a;
	printf("Digite a Nota da Prova 1: ");
	scanf("%f", &p1);
	printf("Digite a Nota da Prova 2: ");
	scanf("%f", &p2);
	printf("Digite a Nota das Atividades do Semestre: ");
	scanf("%f", &a);
	m=((p1*4)+(p2*4)+(a*2))/10;
	printf("A Media Final eh: %.2f", m);
	
	getch();
	return 0;
}
