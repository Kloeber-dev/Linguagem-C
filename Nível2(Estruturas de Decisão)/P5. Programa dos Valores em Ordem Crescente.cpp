#include<stdio.h>
#include<conio.h>

int main ()
{
	float x, y, z;
	printf ("Digite Tres Numeros: ");
	scanf ("%f%f%f", &x, &y, &z);
	if ((x<y)&&(x<z)&&(y<z)){
	printf("Os Valores Em Ordem Crescente Sao: %.2f %.2f %.2f", x, y, z);
	}else {
	
	if ((x<y)&&(x<z)&&(z<y))
	printf("Os Valores Em Ordem Crescente Sao: %.2f %.2f %.2f", x, z, y);
	else
	if ((y<x)&&(y<z)&&(x<z))
	printf("Os Valores Em Ordem Crescente Sao: %.2f %.2f %.2f", y, x, z);
	else
	if ((y<x)&&(y<z)&&(z<x))
	printf("Os Valores Em Ordem Crescente Sao: %.2f %.2f %.2f", y, z, x);
	else
	if ((z<x)&&(z<y)&&(x<y))
	printf("Os Valores Em Ordem Crescente Sao: %.2f %.2f %.2f", z, x, y);
	else
	printf("Os Valores Em Ordem Crescente Sao: %.2f %.2f %.2f", z, y, x);
 }
	 getch ();
	return 0;
}

