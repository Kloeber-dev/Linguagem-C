#include<stdio.h>
#include<conio.h>

int main ()
{
	float X, Y, A, P;
	printf("Digite a medida da altura do retangulo:");
	scanf("%f", &Y);
	printf("Digite a medida da largura do retangulo:");
	scanf("%f", &X);
	A=(X*Y);
	printf("Area total do retangulo: %.4f", A);
	P=(2*Y)+(2*X);
	printf("\nPerimetro do retangulo: %.4f", P);
	
	getch ();
	return 0;
}
