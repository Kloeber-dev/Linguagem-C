#include<stdio.h>
#include<conio.h>

int main ()
{
	int n, nc;
	printf ("Digite Um Numero Inteiro: ");
	scanf ("%d", &n);
	nc=20;
	if ((n>=0)&&(n<=100))
	{
		n=n-nc;
		if (n<0)
			n=n*-1;
			printf ("A Distancia Do Numero Digitado e o Numero Chave eh: %d", n);
	}
	else
	printf ("Numero Digitado Incorreto!");
	
	getch ();
	return 0;
}

