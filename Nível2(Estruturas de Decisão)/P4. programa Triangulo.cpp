#include<stdio.h>
#include<conio.h>

int main ()
{
	float a, b, c;
	printf ("Digite 3 Valores Para os lados de um Triangulo: ");
	scanf ("%f%f%f", &a, &b, &c);
	if ((a<b+c)&&(b<a+c)&&(c<a+b)){
	if ((a==b)&&(b==c))
	printf ("Estes Valores Formam Um Triangulo Equilatero");
	else
	if ((a==b)||(a==c)||(b==c))
	printf("Estes Valores Formam Um Triangulo Isoscele");
	else
	printf("Estes Valores Formam Um Triangulo Escaleno");
	}else
	printf ("Estes Valores Nao Formam Um Triangulo");
 	getch ();
	return 0;
}

