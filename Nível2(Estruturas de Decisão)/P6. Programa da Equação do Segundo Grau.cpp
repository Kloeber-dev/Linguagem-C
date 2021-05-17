#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
	float a, b, c, x1, x2, d;
	printf ("Equacao do Segundo Grau");
	printf ("\nDigite o Coeficiente A: ");
	scanf ("%f", &a);
 	printf ("\nDigite o Coeficiente B: ");
	scanf ("%f", &b);
	printf ("\nDigite o Coeficiente C: ");
	scanf ("%f", &c);
	
	if (a!=0){
	
	d=(b*b)-(4*a*c);
	
	if (d<0)
	{
	printf("A Equacao nao tem solucao");
	}
	else{
	
	if (d==0){
	x1=(-b/2*a);
	x2=x1;
	printf ("A Equacao Tem Duas Raizes Reais e Iguais: %.2f %.2f", x1, x2);
	}
	else{
	x1=(-b +sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
	printf ("A Equacao Tem Duas Raizes Reais e Diferentes: %.2f %.2f", x1, x2);
	}
}
	}else {
	
	printf ("Nao e uma Equacao do Segundo Grau!");}
	
	getch ();
	return 0;
}

