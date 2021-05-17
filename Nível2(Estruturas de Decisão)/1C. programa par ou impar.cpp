#include<stdio.h>
#include<conio.h>

int main ()
{
	int n;
	printf ("Digite Um Numero Inteiro: ");
	scanf ("%d", &n);
	if (n%2==0)
	{
		printf ("O Numero Digitado eh Par: %d", n);
	}
	else 
	printf ("O Numero Digitado eh Impar: %d", n);
	
	getch ();
	return 0;
}

