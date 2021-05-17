#include<stdio.h>
#include<conio.h>

int main ()
{
	float a, b, d;
	printf ("Digite Dois Valores Numericos: ");
	scanf ("%f%f", &a, &b);
	if (a==b)
	d=b-a;
	else
	d=a-b;
	printf ("A Diferenca Entre os numeros eh: %.2f", d);
	
	 getch ();
	return 0;
}

