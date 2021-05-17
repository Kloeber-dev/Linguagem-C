#include<stdio.h>
#include<conio.h>

int main ()
{
	float a, c, r;
	printf("Digite o raio da Circunferencia: ");
	scanf("%f", &r);
	a=3.1416*(r*r);
	printf("A area do circulo eh: %.4f", a);
	c=2*3.1416*r;
	printf("\nO Comprimento do Circulo eh: %.4f",  c);
	
	getch ();
	return 0;
}
