#include<stdio.h>
#include<conio.h>

int main ()
{
	float a, b, c;
	printf ("Digite Tres Numeros Diferentes: ");
	scanf ("%f %f %f", &a, &b, &c);
	if ((a>b)&&(a>c)&&(b>c))
	{
		printf ("O Valor Maior eh: %.2f", a);
		printf ("\nO Valor Menor eh: %.2f", c);
		printf ("\nE O Valor Do Meio eh: %.2f", b);
	}
	else 
	if ((a>b)&&(a>c)&&(c>b))
	{
		printf ("O Valor Maior eh: %.2f", a);
		printf ("\nO Valor Menor eh: %.2f", b);
		printf ("\nE O Valor Do Meio eh: %.2f", c);
	}
	else 
	if ((b>a)&&(b>c)&&(a>c))
	{
		printf ("O Valor Maior eh: %.2f", b);
		printf ("\nO Valor Menor eh: %.2f", c);
		printf ("\nE O Valor Do Meio eh: %.2f", a);
	}
	else
	if ((b>a)&&(b>c)&&(c>a))
	{
		printf ("O Valor Maior eh: %.2f", b);
		printf ("\nO Valor Menor eh: %.2f", a);
		printf ("\nE O Valor Do Meio eh: %.2f", c);
	}
	else
	if ((c>a)&&(c>b)&&(a>b))
	{
		printf ("O Valor Maior eh: %.2f", c);
		printf ("\nO Valor Menor eh: %.2f", b);
		printf ("\nE O Valor Do Meio eh: %.2f", a);
	}
	else
	printf ("O Valor Maior eh: %.2f", c);
		printf ("\nO Valor Menor eh: %.2f", a);
		printf ("\nE O Valor Do Meio eh: %.2f", b);
	
	getch ();
	return 0;
}

