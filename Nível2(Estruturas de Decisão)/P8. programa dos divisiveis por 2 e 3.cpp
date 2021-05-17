#include<stdio.h>
#include<conio.h>

int main ()
{
	int n1, n2, n3, n4;
	printf ("Digite Quatro Numeros Inteiros: ");
	scanf ("%d %d %d %d", &n1, &n2, &n3, &n4);
	if ((n1%2==0)&&(n1%3==0)||(n2%2==0)&&(n2%3==0)||(n3%2==0)&&(n3%3==0)||(n4%2==0)&&(n4%3==0))
	{
		if ((n1%2==0)&&(n1%3==0))
		{
			printf ("Numero divisivel por 2 e 3: %d", n1);
		}
		if ((n2%2==0)&&(n2%3==0))
		{
			printf ("\nNumero Divisivel por 2 e 3: %d", n2);
		}
		if ((n3%2==0)&&(n3%3==0))
		{
			printf ("\nNumero Divisivel por 2 e 3: %d", n3);
		}
		if ((n4%2==0)&&(n4%3==0))
		{
			printf ("\nNumero Divisivel por 2 e 3: %d", n4);
		}
	}
	else 
		printf ("Nao Foi Digitado Nenhum Numero Divisivel por 2 e 3!");
	getch ();
	return 0;
}

